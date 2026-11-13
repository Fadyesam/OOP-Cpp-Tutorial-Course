// سؤال صعب 2: كم مرة يُنشأ الجد في مشكلة الماسة؟
#include <iostream>
using namespace std;

class Person {
public:
    Person() { cout << "Person constructor" << endl; }
};

// بدون virtual: Person تُنشأ مرتين
class Student : public Person {};
class Employee : public Person {};
class TA1 : public Student, public Employee {};

// مع virtual: Person تُنشأ مرة واحدة
class VStudent : virtual public Person {};
class VEmployee : virtual public Person {};
class TA2 : public VStudent, public VEmployee {};

int main() {
    cout << "Non-virtual:" << endl;
    TA1 a;
    cout << "Virtual:" << endl;
    TA2 b;
    return 0;
}
