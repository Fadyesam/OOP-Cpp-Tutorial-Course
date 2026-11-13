// Section 3 - Q3: حل الغموض في الوراثة المتعددة بعامل ::
#include <iostream>
using namespace std;

class Camera {
public:
    void start() { cout << "Camera\n"; }
};
class GPS {
public:
    void start() { cout << "GPS\n"; }
};

class Drone : public Camera, public GPS {};   // الاسم start موجود في الأبوين

int main() {
    Drone d;
    // d.start();         // خطأ: ambiguous
    d.Camera::start();    // نحدد الأب صراحة
    d.GPS::start();
    return 0;
}
