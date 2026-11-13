// Section 4 - Q4 (بعد التصحيح): صيغة الوراثة الصحيحة
#include <iostream>
using namespace std;

class Employee {
public:
    void work() { cout << "Employee works" << endl; }
};

// class Manager Employee { };         // خطأ: ينقص النقطتان : ونمط الوراثة
class Manager : public Employee {      // الصحيح
public:
    void manage() { cout << "Manager manages" << endl; }
};

int main() {
    Manager m;
    m.work();
    m.manage();
    return 0;
}
