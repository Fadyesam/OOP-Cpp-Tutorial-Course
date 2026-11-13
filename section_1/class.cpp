#include <iostream>
#include <string>   // مطلوبة لاستخدام string
using namespace std;

// تعريف Class اسمها Student
class Student
{
public:
    // Attribute لتخزين اسم الطالب
    string name;

    // Attribute لتخزين رقم الطالب
    int id;

    // Behavior / Method لطباعة بيانات الطالب
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

int main()
{
    // إنشاء Object اسمه s1 من Class Student
    Student s1;

    // إعطاء قيمة للـ Attribute name
    s1.name = "Ahmed";

    // إعطاء قيمة للـ Attribute id
    s1.id = 101;

    // استدعاء الـ Behavior display()
    s1.display();
    
    // Object الثاني
    Student s2;

    // بيانات الطالب الثاني
    s2.name = "Sara";
    s2.id = 102;

    s2.display();

    return 0;
}
