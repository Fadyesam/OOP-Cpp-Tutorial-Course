// سؤال صعب 1: ترتيب Constructors و Destructors مع الوراثة
#include <iostream>
using namespace std;

class A {
public:
    A(int x) { cout << "A constructor " << x << endl; }
    ~A()     { cout << "A destructor" << endl; }
};
class B : public A {
public:
    B(int x) : A(x) { cout << "B constructor" << endl; }   // الأب أولًا ثم جسم B
    ~B()            { cout << "B destructor" << endl; }
};
class C : public B {
public:
    C(int x) : B(x) { cout << "C constructor" << endl; }
    ~C()            { cout << "C destructor" << endl; }
};

int main() {
    C obj(5);
    return 0;      // التدمير بعكس الإنشاء: C ثم B ثم A
}
