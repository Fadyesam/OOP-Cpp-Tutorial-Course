// Section 3 - Q2: Multilevel Inheritance (A -> B -> C)
#include <iostream>
using namespace std;

class A {
public:
    void first() { cout << "A "; }
};
class B : public A {
public:
    void second() { cout << "B "; }
};
class C : public B {                     // C ترث من B وB ترث من A
public:
    void third() { cout << "C"; }
};

int main() {
    C obj;
    obj.first();     // من A
    obj.second();    // من B
    obj.third();     // من C
    cout << endl;
    return 0;
}
