#include <iostream>
using namespace std;

class Counter {
    int n = 0;
public:
    void inc() { n++; }                 // normal function: may modify
    int get() const { return n; }       // const function: read only
    void bad() const {
        // n++;                         // ERROR
    }
};

int main() {
    Counter c;
    c.inc();
    c.inc();
    cout << c.get() << endl;            // 2
}
