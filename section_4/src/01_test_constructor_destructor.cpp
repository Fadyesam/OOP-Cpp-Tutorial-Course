// Section 4 - Question 1
// الهدف: ملاحظة استدعاء الـ Constructor والـ Destructor تلقائيًا
#include <iostream>
using namespace std;

class Test {
public:
    Test() {                    // Constructor: يُنادى تلقائيًا عند إنشاء الكائن
        cout << "Constructor called" << endl;
    }
    ~Test() {                   // Destructor: يُنادى تلقائيًا عند انتهاء عمر الكائن
        cout << "Destructor called" << endl;
    }
};

int main() {
    Test t1;                    // أول كائن => Constructor
    Test t2;                    // ثاني كائن => Constructor
    return 0;                   // عند النهاية يُدمَّر t2 ثم t1 (عكس ترتيب الإنشاء)
}
