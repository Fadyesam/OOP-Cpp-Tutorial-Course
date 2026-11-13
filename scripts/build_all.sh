#!/usr/bin/env bash
# Builds and runs every example in the repository.
# Usage:  bash scripts/build_all.sh
# A folder with several .cpp files and ONE main() is built as one project
# (example: Circle_Project). Otherwise every .cpp file that has a main() is
# built on its own. Each program is run once (stdin = "5") and must exit with 0.

set -u
cd "$(dirname "$0")/.." || exit 1
TMP="$(mktemp -d)"
trap 'rm -rf "$TMP"' EXIT
CXXFLAGS="-std=c++17 -Wall -Wextra"
pass=0; fail=0

run_one() {                       # $1 = label, rest = source files
    label="$1"; shift
    if ! g++ $CXXFLAGS "$@" -I"$(dirname "$1")" -o "$TMP/prog" 2>"$TMP/err"; then
        echo "FAIL (compile)  $label"; sed 's/^/    /' "$TMP/err" | head -5; fail=$((fail+1)); return
    fi
    if ! echo 5 | timeout 10 "$TMP/prog" >/dev/null 2>&1; then
        echo "FAIL (run)      $label"; fail=$((fail+1)); return
    fi
    echo "ok              $label"; pass=$((pass+1))
}

while IFS= read -r dir; do
    files=("$dir"/*.cpp)
    mains=$(grep -lE '\bint[[:space:]]+main[[:space:]]*\(' "${files[@]}" | wc -l)
    if [ "${#files[@]}" -gt 1 ] && [ "$mains" -le 1 ]; then
        run_one "$dir (project)" "${files[@]}"
    else
        for f in "${files[@]}"; do
            grep -qE '\bint[[:space:]]+main[[:space:]]*\(' "$f" && run_one "$f" "$f"
        done
    fi
done < <(find . -name '*.cpp' -not -path './.git/*' -printf '%h\n' | sort -u)

echo; echo "passed: $pass   failed: $fail"
[ "$fail" -eq 0 ]
