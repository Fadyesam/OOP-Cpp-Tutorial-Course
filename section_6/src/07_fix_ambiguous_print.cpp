// Section 4 - Q3 (بعد التصحيح): حل الغموض بطريقتين
#include <iostream>
using namespace std;

class A {
public:
    void print() { cout << "A" << endl; }
};
class B {
public:
    void print() { cout << "B" << endl; }
};

class C : public A, public B {};            // يحتاج تحديد الأب عند الاستدعاء

class C2 : public A, public B {
public:
    void print() {                          // الحل 2: دالة في الابن تحل الغموض
        A::print();
        B::print();
    }
};

int main() {
    C obj;
    // obj.print();     // خطأ: ambiguous
    obj.A::print();     // الحل 1: عامل ::
    obj.B::print();
    C2 obj2;
    obj2.print();
    return 0;
}
