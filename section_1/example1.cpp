#include <iostream>
#include <string>   // مطلوبة لاستخدام string
using namespace std;

// تعريف Class اسمها Employee
class Employee
{
public:

    // اسم الموظف
    string name;

    // رقم الموظف
    int id;

    // راتب الموظف
    float salary;
};

int main()
{
    // إنشاء Object اسمه emp1
    Employee emp1;

    // إعطاء بيانات للموظف الأول
    emp1.name = "Ahmed Ali";
    emp1.id = 101;
    emp1.salary = 7500.50;

    // إنشاء Object ثاني اسمه emp2
    Employee emp2;

    // إعطاء بيانات للموظف الثاني
    emp2.name = "Sara Mohamed";
    emp2.id = 102;
    emp2.salary = 8200.00;

    // طباعة بيانات الموظف الأول
    cout << emp1.name << endl;
    cout << emp1.id << endl;
    cout << emp1.salary << endl;

    return 0;
}
