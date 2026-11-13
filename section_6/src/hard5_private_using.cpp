// سؤال صعب 5: وراثة private مع using لإظهار دالة واحدة
#include <iostream>
using namespace std;

class Engine {
public:
    void start() { cout << "Engine started" << endl; }
    void stop()  { cout << "Engine stopped" << endl; }
};

class Car : private Engine {          // كل دوال Engine أصبحت private في Car
public:
    using Engine::start;              // نعيد إظهار start فقط كـ public
};

int main() {
    Car c;
    c.start();
    // c.stop();                      // خطأ: stop ما زالت private
    return 0;
}
