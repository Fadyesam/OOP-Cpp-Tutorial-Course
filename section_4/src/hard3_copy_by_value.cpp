// سؤال صعب 3: متى يُستدعى الـ Copy Constructor؟ (ومنها تمرير الكائن بالقيمة لدالة)
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    Student(string n) {
        name = n;
        cout << "Parameterized: " << name << endl;
    }
    Student(const Student& other) {  // Copy Constructor
        name = other.name;
        cout << "Copy: " << name << endl;
    }
    ~Student() {
        cout << "Destroy: " << name << endl;
    }
};

void show(Student s) {          // تمرير بالقيمة => يُنشأ نسخة جديدة
    cout << "In function: " << s.name << endl;
}                               // انتهاء الدالة => تُدمَّر النسخة

int main() {
    Student s1("Ali");          // Parameterized
    Student s2 = s1;            // Copy
    show(s1);                   // Copy ثم Destroy للنسخة
    return 0;                   // Destroy لـ s2 ثم s1
}
