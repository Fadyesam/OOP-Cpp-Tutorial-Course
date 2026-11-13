#include <iostream>
using namespace std;

class Student
{
private:

    // هذا المتغير private
    // لا يمكن الوصول إليه مباشرة من خارج الـ Class
    int id;

public:

    // هذه الدالة public
    // يمكن استدعاؤها من خارج الـ Class
    void setID(int studentID)
    {
        // وضع القيمة داخل id
        id = studentID;
    }

    // دالة للحصول على قيمة id
    int getID()
    {
        return id;
    }
};

int main()
{
    Student s1;

    // لا يمكن كتابة:
    // s1.id = 101;
    // لأن id private

    // نستخدم الـ public function بدلًا من ذلك
    s1.setID(101);

    // الحصول على قيمة id
    cout << s1.getID() << endl;

    return 0;
}
