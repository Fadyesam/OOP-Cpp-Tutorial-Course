// الأنواع الخمسة للوراثة في C++ (مثال لكل نوع)
#include <iostream>
using namespace std;

// 1) Single: أب واحد وابن واحد
class Animal { public: void eat() { cout << "Animal eats" << endl; } };
class Dog : public Animal { public: void bark() { cout << "Dog barks" << endl; } };

// 2) Multiple: ابن له أكثر من أب
class Father { public: void work() { cout << "Father works" << endl; } };
class Mother { public: void cook() { cout << "Mother cooks" << endl; } };
class Child : public Father, public Mother {};

// 3) Multilevel: سلسلة (جد -> أب -> ابن)
class Grandfather { public: void house() { cout << "Grandfather's house" << endl; } };
class Dad : public Grandfather { public: void car() { cout << "Dad's car" << endl; } };
class Son : public Dad {};

// 4) Hierarchical: أب واحد وعدة أبناء
class Shape { public: void draw() { cout << "Drawing a shape" << endl; } };
class Circle : public Shape {};
class Square : public Shape {};

// 5) Hybrid: خليط (هنا Hierarchical + Multiple)
class Person { public: Person() { cout << "Person created" << endl; } };
class Student : virtual public Person {};     // virtual لمنع تكرار Person
class Employee : virtual public Person {};
class TeachingAssistant : public Student, public Employee {};

int main() {
    Dog d;  d.eat(); d.bark();                    // Single
    Child c; c.work(); c.cook();                  // Multiple
    Son s;  s.house(); s.car();                   // Multilevel
    Circle ci; Square sq; ci.draw(); sq.draw();   // Hierarchical
    TeachingAssistant ta;                         // Hybrid: Person تُنشأ مرة واحدة
    return 0;
}
