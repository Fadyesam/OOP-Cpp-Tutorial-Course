// سؤال صعب 4: ترتيب Constructors في الوراثة المتعددة
#include <iostream>
using namespace std;

class Student {
public:
    Student()  { cout << "Student constructor" << endl; }
    ~Student() { cout << "Student destructor" << endl; }
};
class Employee {
public:
    Employee()  { cout << "Employee constructor" << endl; }
    ~Employee() { cout << "Employee destructor" << endl; }
};

class TA : public Employee, public Student {      // الترتيب هنا هو المعتمد
public:
    // تنبيه: قد يعرض المترجم تحذير -Wreorder هنا، وهذا مقصود لتوضيح الفكرة
    TA() : Student(), Employee() {                // ترتيب الكتابة هنا لا يؤثر
        cout << "TA constructor" << endl;
    }
    ~TA() { cout << "TA destructor" << endl; }
};

int main() {
    TA t;
    return 0;
}
