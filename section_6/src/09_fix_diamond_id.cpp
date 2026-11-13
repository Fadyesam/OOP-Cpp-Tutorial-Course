// Section 4 - Q5 (بعد التصحيح): مشكلة الماسة (Diamond Problem)
#include <iostream>
using namespace std;

// الحل 1: نحدد المسار بعامل :: داخل دالة public في D
class A {
protected:
    int id = 10;
};
class B : public A {};
class C : public A {};
class D : public B, public C {             // في D نسختان من A
public:
    void show() { cout << "via B: " << B::id << ", via C: " << C::id << endl; }
};

// الحل 2: الوراثة virtual => نسخة واحدة فقط من A
class VA {
protected:
    int id = 10;
};
class VB : virtual public VA {};
class VC : virtual public VA {};
class VD : public VB, public VC {
public:
    void show() { cout << "virtual: " << id << endl; }   // بلا غموض
};

int main() {
    D obj;
    // cout << obj.id;     // خطأ: ambiguous + protected
    obj.show();
    VD v;
    v.show();
    return 0;
}
