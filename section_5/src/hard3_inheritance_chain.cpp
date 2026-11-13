// سؤال صعب 3: سلسلة وراثة بأنماط مختلفة
#include <iostream>
using namespace std;

class A {
public:    int x = 1;
protected: int y = 2;
private:   int z = 3;
};

class B : protected A {};               // x,y -> protected في B
class C : public B {                    // C ترث protected من B
public:
    void show() { cout << "C sees x=" << x << " y=" << y << endl; }
    // z غير مرئي أبدًا
};

class D : private A {};                 // x,y -> private في D
class E : public D {
public:
    void show() {
        // cout << x;                   // خطأ: x private في D فلا تراه E
        cout << "E sees nothing from A" << endl;
    }
};

int main() {
    C c;  c.show();
    // cout << c.x;                     // خطأ: x protected
    E e;  e.show();
    return 0;
}
