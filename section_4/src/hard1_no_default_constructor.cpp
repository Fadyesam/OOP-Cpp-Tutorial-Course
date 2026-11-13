// سؤال صعب 1: ماذا يحدث لو عرّفنا Constructor واحد فقط له باراميتر؟
#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    Car(string brand) {         // Constructor وحيد بباراميتر
        cout << "Car " << brand << endl;
    }
};

class Truck {
public:
    Truck(string brand = "Unknown") {  // قيمة افتراضية => يعمل أيضًا كـ Default
        cout << "Truck " << brand << endl;
    }
};

int main() {
    Car c1("BMW");              // سليم
    // Car c2;         // خطأ ترجمة! لا يوجد Default Constructor (فُكّ التعليق لترى)
    Truck t1;                   // سليم بفضل القيمة الافتراضية
    Truck t2("MAN");            // سليم
    return 0;
}
