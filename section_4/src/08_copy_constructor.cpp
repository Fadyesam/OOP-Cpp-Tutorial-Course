// MCQ 8 - Student s2 = s1;  أي Constructor يُستدعى؟
// الهدف: شرح الـ Copy Constructor
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;

    Student(string n) {         // Parameterized Constructor
        name = n;
        cout << "Parameterized: " << name << endl;
    }
    Student(const Student& other) {  // Copy Constructor: ينسخ من كائن موجود
        name = other.name;
        cout << "Copy: " << name << endl;
    }
};

int main() {
    Student s1("Ali");          // Parameterized
    Student s2 = s1;            // Copy Constructor
    Student s3(s1);             // Copy Constructor (كتابة أخرى لنفس الفكرة)
    return 0;
}
