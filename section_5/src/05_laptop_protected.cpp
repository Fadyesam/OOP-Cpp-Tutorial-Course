// Section E - Q3: Laptop بوراثة protected
#include <iostream>
using namespace std;

class Device {
protected:
    bool powerStatus;
public:
    Device(bool status = false) : powerStatus(status) {}
    void showStatus() {
        cout << "Power status: " << (powerStatus ? "ON" : "OFF") << endl;
    }
};

class Laptop : protected Device {        // showStatus أصبحت protected
public:
    Laptop(bool status = false) : Device(status) {}

    void togglePower() {
        powerStatus = !powerStatus;
        cout << "Laptop power toggled." << endl;
        showStatus();                    // تعمل داخل الكلاس
    }
    void showLaptopStatus() {            // نعيد إظهارها كدالة public
        showStatus();
    }
};

int main() {
    Laptop myLaptop(false);
    // myLaptop.showStatus();    // خطأ: أصبحت protected
    // myLaptop.powerStatus;     // خطأ: protected لا يُرى من main
    myLaptop.togglePower();
    myLaptop.showLaptopStatus(); // سليم
    return 0;
}
