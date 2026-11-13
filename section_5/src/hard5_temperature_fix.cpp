// سؤال صعب 5: خطأ خفي في كود TemperatureSensor وإصلاحه
#include <iostream>
using namespace std;

class TemperatureSensor {
private:
    double currentTemp;
public:
    TemperatureSensor(double temp = 20.0) {
        currentTemp = 20.0;             // الإصلاح: قيمة ابتدائية آمنة أولًا
        setTemperature(temp);           // بدونها تبقى القيمة عشوائية لو temp مرفوضة
    }
    double getTemperature() const { return currentTemp; }
    bool setTemperature(double temp) {  // نرجع true/false ليعرف المستدعي النتيجة
        if (temp < -50.0 || temp > 100.0) {
            cout << "Invalid temperature! Must be between -50 and 100." << endl;
            return false;
        }
        currentTemp = temp;
        return true;
    }
};

class SmartThermostat : public TemperatureSensor {
public:
    SmartThermostat(double temp = 20.0) : TemperatureSensor(temp) {}
    void adjustTemperature(double delta) {
        if (setTemperature(getTemperature() + delta))
            cout << "Temperature adjusted to: " << getTemperature() << endl;
        else
            cout << "Adjustment rejected. Still: " << getTemperature() << endl;
    }
};

int main() {
    TemperatureSensor s(500);           // قيمة غير صالحة في الـ Constructor
    cout << s.getTemperature() << endl; // 20 بفضل الإصلاح
    SmartThermostat t(25);
    t.adjustTemperature(100);           // مرفوضة
    t.adjustTemperature(-5);            // 20
    return 0;
}
