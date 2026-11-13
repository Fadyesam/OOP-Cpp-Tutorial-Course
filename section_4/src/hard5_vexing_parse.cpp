// سؤال صعب 5: فخ شهير - الأقواس الفارغة
#include <iostream>
using namespace std;

class Car {
public:
    Car() {
        cout << "Default Car created" << endl;
    }
};

int main() {
    // تنبيه: قد يعرض المترجم تحذير -Wvexing-parse هنا، وهذا مقصود لتوضيح الفكرة
    Car c1();   // تصريح دالة اسمها c1 وليس كائنًا => لا Constructor
    Car c2;                     // الكتابة الصحيحة لإنشاء كائن بالـ Default Constructor
    return 0;
}
