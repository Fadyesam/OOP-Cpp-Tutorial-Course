// Section C - Q2: الوراثة من نوع protected
#include <iostream>
using namespace std;

class Shape {
public:
    int sides = 4;
protected:
    int colorCode = 255;
};

class Rectangle : protected Shape {   // public و protected يصبحان protected
public:
    void printInfo() {
        cout << sides << " " << colorCode << endl;   // مسموح داخل الكلاس
    }
};

int main() {
    Rectangle r;
    r.printInfo();
    // cout << r.sides;     // خطأ: sides أصبح protected في Rectangle
    return 0;
}
