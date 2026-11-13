// Section 3 - Q4: بيانات private ودوال public للتعامل معها
#include <iostream>
using namespace std;

class Counter {
private:
    int value = 2;                       // قيمة ابتدائية
public:
    void increment(int n) { value += n; }
    void show() { cout << value << endl; }
};

int main() {
    Counter c;
    c.increment(3);   // 2 + 3 = 5
    c.increment(4);   // 5 + 4 = 9
    c.show();
    return 0;
}
