// Section 4 - Question 2
// الهدف: وجود أكثر من Constructor في نفس الكلاس (Overloading)
#include <iostream>
using namespace std;

class Employee {
public:
    Employee() {                // Default Constructor: بدون باراميترات
        cout << "Default Constructor Invoked" << endl;
    }
    Employee(int id) {          // Parameterized Constructor: يأخذ باراميتر
        (void)id;               // id غير مستخدم هنا، الهدف فقط شرح الـ Overloading
        cout << "Parameterized Constructor Invoked" << endl;
    }
};

int main() {
    Employee e1;                // بدون قيم => يُنادى الـ Default
    Employee e2(101);           // بقيمة int => يُنادى الـ Parameterized
    return 0;
}
