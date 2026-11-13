// Problem 1 - Class Car
// الهدف: Default Constructor + Parameterized Constructor
#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    Car() {                     // Default Constructor
        cout << "Default Car created" << endl;
    }
    Car(string brand) {         // Parameterized Constructor
        cout << "Car of brand " << brand << " created" << endl;
    }
};

int main() {
    Car c1;                     // يستدعي الـ Default
    Car c2("BMW");              // يستدعي الـ Parameterized
    return 0;
}
