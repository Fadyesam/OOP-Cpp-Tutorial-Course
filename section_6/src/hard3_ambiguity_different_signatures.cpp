// سؤال صعب 3: الغموض حتى لو اختلفت الباراميترات
#include <iostream>
#include <string>
using namespace std;

class A {
public:
    void f(int x) { cout << "A::f(int) " << x << endl; }
};
class B {
public:
    void f(string s) { cout << "B::f(string) " << s << endl; }
};

class C0 : public A, public B {};           // البحث عن الاسم f يجد نسختين => غموض

class C : public A, public B {
public:
    using A::f;                             // ندخل الدالتين في نطاق C
    using B::f;
};

int main() {
    C0 o;
    // o.f(5);            // خطأ: ambiguous رغم اختلاف الباراميترات
    o.A::f(5);
    C c;
    c.f(5);               // يختار f(int)
    c.f("hi");            // يختار f(string)
    return 0;
}
