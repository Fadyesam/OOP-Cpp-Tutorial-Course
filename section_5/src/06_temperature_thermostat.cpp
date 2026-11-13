// Section E - Q4 & Q5: TemperatureSensor و SmartThermostat
#include <iostream>
using namespace std;

class TemperatureSensor {
private:
    double currentTemp;
public:
    TemperatureSensor(double temp = 20.0) {
        setTemperature(temp);            // نستخدم الـ setter للتحقق
    }
    double getTemperature() const {
        return currentTemp;
    }
    void setTemperature(double temp) {
        if (temp < -50.0 || temp > 100.0) {
            cout << "Invalid temperature! Must be between -50 and 100." << endl;
            return;
        }
        currentTemp = temp;
    }
};

class SmartThermostat : public TemperatureSensor {
public:
    SmartThermostat(double temp = 20.0) : TemperatureSensor(temp) {}

    void adjustTemperature(double delta) {
        double newTemp = getTemperature() + delta;
        setTemperature(newTemp);         // نعيد استخدام منطق التحقق
        cout << "Temperature adjusted to: " << getTemperature() << endl;
    }
};

int main() {
    SmartThermostat t(25);
    t.adjustTemperature(10);     // 35
    t.adjustTemperature(100);    // 135 مرفوضة
    t.adjustTemperature(-20);    // 15
    return 0;
}
