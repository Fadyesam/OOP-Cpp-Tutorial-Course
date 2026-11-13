#include <iostream>
using namespace std;

class Student {
    double gpa = 0;
public:
    void setGPA(double g) { if (g >= 0 && g <= 4) gpa = g; }   // setter
    double getGPA() const { return gpa; }
};

int main() {
    Student s;
    s.setGPA(3.5);
    s.setGPA(9);                        // rejected
    cout << s.getGPA() << endl;         // 3.5
}
