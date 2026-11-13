// Problem 3 - Class Person
// الهدف: ثلاثة كائنات => التدمير بالعكس (Omar ثم Sara ثم Ali)
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    Person(string n) {          // Constructor
        name = n;
        cout << "Person " << name << " is created" << endl;
    }
    ~Person() {                 // Destructor
        cout << "Person " << name << " is destroyed" << endl;
    }
};

int main() {
    Person p1("Ali");
    Person p2("Sara");
    Person p3("Omar");
    return 0;                   // التدمير: p3 ثم p2 ثم p1
}
