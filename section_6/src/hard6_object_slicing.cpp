// سؤال صعب 6: نسخ الابن إلى كائن أب (Object Slicing)
#include <iostream>
using namespace std;

class Vehicle {
public:
    int wheels = 4;
    void info() { cout << "Vehicle with " << wheels << " wheels" << endl; }
};

class Car : public Vehicle {
public:
    int doors = 4;
    void info() {
        cout << "Car with " << wheels << " wheels and " << doors << " doors" << endl;
    }
};

int main() {
    Car c;
    c.info();
    Vehicle v = c;        // يُنسخ جزء Vehicle فقط ويضيع جزء Car (Slicing)
    v.info();             // نسخة Vehicle
    // cout << v.doors;   // خطأ: Vehicle لا تعرف doors
    return 0;
}
