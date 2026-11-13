#!/bin/sh
# يعمل من أي مكان: ننتقل أولًا لمجلد المشروع
cd "$(dirname "$0")" || exit 1
g++ -std=c++17 -Wall -Wextra main.cpp Circle.cpp -o circle_app && ./circle_app
