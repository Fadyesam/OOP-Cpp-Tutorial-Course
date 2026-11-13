// Section E - Q1 & Q2: كلاس Device وكلاس Laptop (وراثة public)
#include <iostream>
using namespace std;

class Device {
protected:
    bool powerStatus;                    // protected: يراه Device والكلاسات المشتقة منه
public:
    Device(bool status = false) : powerStatus(status) {}
    void showStatus() {
        cout << "Power status: " << (powerStatus ? "ON" : "OFF") << endl;
    }
};

class Laptop : public Device {
public:
    Laptop(bool status = false) : Device(status) {}   // استدعاء Constructor الأب

    void togglePower() {
        powerStatus = !powerStatus;      // مسموح: protected في الأب
        cout << "Laptop power toggled." << endl;
        showStatus();
    }
};

int main() {
    Laptop myLaptop(false);
    myLaptop.showStatus();    // OFF
    myLaptop.togglePower();   // يصبح ON
    return 0;
}
