// Section 3 - Q1: الابن يستخدم أعضاء الأب public
#include <iostream>
using namespace std;

class Vehicle {
public:
    int wheels = 4;
    void move() { cout << "Moving\n"; }
};

class Car : public Vehicle {
public:
    void show() {
        cout << wheels << " wheels\n";   // عضو موروث
        move();                          // دالة موروثة
    }
};

int main() {
    Car c;
    c.show();
    return 0;
}
