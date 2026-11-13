// Section C - Q1: هل تصل الكلاس المشتقة إلى الـ private؟
#include <iostream>
using namespace std;

class Vehicle {
private:
    int speed;                  // private: لا يراه إلا Vehicle نفسه
public:
    Vehicle(int s) { speed = s; }
    void displaySpeed() { cout << "Speed: " << speed << endl; }
};

class Car : public Vehicle {
public:
    Car(int s) : Vehicle(s) {}  // نمرر القيمة لـ Constructor الأب
    void showCarSpeed() {
        // cout << speed;       // Line A: خطأ! speed private في الأب
        displaySpeed();         // Line B: سليم، دالة public في الأب
    }
};

int main() {
    Car c(120);
    c.showCarSpeed();
    return 0;
}
