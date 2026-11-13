#include <iostream>
#include <string>   // مطلوبة لاستخدام string
using namespace std;

class Smartphone
{
public:

    // Attributes
    string brand;
    string model;
    int batteryLevel;

    // Behavior
    void makeCall()
    {
        cout << "Making a call..." << endl;
    }

    // Behavior
    void sendMessage()
    {
        cout << "Sending a message..." << endl;
    }

    // Behavior
    void chargeBattery()
    {
        cout << "Charging battery..." << endl;
    }
};

int main()
{
    // إنشاء Smartphone Object
    Smartphone phone;

    // إعطاء قيم للـ Attributes
    phone.brand = "Samsung";
    phone.model = "S25";
    phone.batteryLevel = 80;

    // استدعاء Behavior
    phone.makeCall();

    // استدعاء Behavior آخر
    phone.sendMessage();

    return 0;
}
