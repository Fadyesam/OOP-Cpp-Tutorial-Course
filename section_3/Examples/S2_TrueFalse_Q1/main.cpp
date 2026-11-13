#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
private:
    int age = 0;
public:                                 // public appears again: allowed
    void setAge(int a) { if (a >= 0) age = a; }
    int getAge() const { return age; }
};

int main() {
    Person p;
    p.name = "Ali";
    p.setAge(20);
    cout << p.name << " " << p.getAge() << endl;   // Ali 20
}
