#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
public:
    Student(string n) : name(n) {}
    string getName() const { return name; }    // getter: returns, never changes
};

int main() {
    Student s("Mona");
    cout << s.getName() << endl;        // Mona
}
