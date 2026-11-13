// Section 4 - Question 3
// الهدف: ترتيب الإنشاء والتدمير (آخر كائن يُنشأ هو أول كائن يُدمَّر)
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    Student(string n) {         // Constructor يخزّن الاسم ويطبع رسالة
        name = n;
        cout << "Constructor for " << name << endl;
    }
    ~Student() {                // Destructor يطبع اسم الكائن المُدمَّر
        cout << "Destructor for " << name << endl;
    }
};

int main() {
    Student s1("Ali");          // يُنشأ أولًا
    Student s2("Sara");         // يُنشأ ثانيًا
    return 0;                   // التدمير: Sara ثم Ali
}
