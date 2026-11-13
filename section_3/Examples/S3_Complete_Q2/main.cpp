#include <iostream>
using namespace std;

class Student {
    int id = 0;
public:
    void set_Id(int Id);
    int get_Id() const;
};

void Student::set_Id(int Id) { id = Id; }      // Student:: binds it to the class
int Student::get_Id() const { return id; }

int main() {
    Student s;
    s.set_Id(15);
    cout << s.get_Id() << endl;         // 15
}
