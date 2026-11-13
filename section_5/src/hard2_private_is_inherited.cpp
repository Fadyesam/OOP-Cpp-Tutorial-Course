// سؤال صعب 2: الـ private موروث لكن لا يُرى مباشرة
#include <iostream>
using namespace std;

class Base {
    int secret;                         // private (الافتراضي في class)
public:
    Base(int s) : secret(s) {}
    int getSecret() const { return secret; }
};

class Derived : public Base {           // لا يضيف أي بيانات جديدة
public:
    Derived(int s) : Base(s) {}
    // void f() { cout << secret; }     // خطأ: لا وصول مباشر
};

int main() {
    Derived d(42);
    cout << d.getSecret() << endl;      // وصول غير مباشر
    cout << (sizeof(Derived) == sizeof(Base) ? "Same size" : "Different size") << endl;
    return 0;                           // Same size => secret موجود داخل Derived
}
