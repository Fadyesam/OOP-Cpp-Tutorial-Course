// سؤال صعب 1: protected عبر كائن آخر
#include <iostream>
using namespace std;

class Base {
protected:
    int secret = 7;
};

class Derived : public Base {
public:
    void readFromDerived(Derived& d) {
        cout << d.secret << endl;       // سليم: الكائن من نوع Derived
    }
    void readFromBase(Base& /*b*/) {
        // cout << b.secret;            // خطأ: الكائن من نوع Base
        cout << "Access through Base object is refused" << endl;
    }
};

int main() {
    Derived a, b;
    a.readFromDerived(b);
    a.readFromBase(b);
    return 0;
}
