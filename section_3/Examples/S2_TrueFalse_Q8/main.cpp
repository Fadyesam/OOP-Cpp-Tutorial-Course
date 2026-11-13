#include <iostream>
using namespace std;

class Circle {
    double radius;
public:
    Circle() {                          // same name as the class, no return type
        radius = 0;
        cout << "Constructor called" << endl;
    }
};

int main() {
    Circle c;                           // constructor runs automatically
}
