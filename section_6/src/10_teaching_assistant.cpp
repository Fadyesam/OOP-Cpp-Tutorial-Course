// Section 5 - Q1: TeachingAssistant يرث من Student و Employee
#include <iostream>
using namespace std;

class Student {
protected:
    int studentId;
public:
    Student(int id) : studentId(id) {}
    void printStudent() const { cout << "Student ID: " << studentId << endl; }
};

class Employee {
protected:
    int employeeId;
public:
    Employee(int id) : employeeId(id) {}
    void printEmployee() const { cout << "Employee ID: " << employeeId << endl; }
};

class TeachingAssistant : public Student, public Employee {
public:
    TeachingAssistant(int sid, int eid)
        : Student(sid), Employee(eid) {}   // نمرر قيمة لكل أب
    void display() const {
        printStudent();                    // أسماء مختلفة => لا غموض
        printEmployee();
    }
};

int main() {
    TeachingAssistant ta(1205, 774);
    ta.display();
    return 0;
}
