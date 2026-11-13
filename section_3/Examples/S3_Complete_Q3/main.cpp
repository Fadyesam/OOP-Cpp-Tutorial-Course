#include <iostream>
using namespace std;

class Calculator {
    int twice(int x) const { return 2 * x; }   // private helper
public:                                         // public interface
    int addTwice(int a, int b) const { return twice(a) + twice(b); }
};

int main() {
    Calculator c;
    cout << c.addTwice(2, 3) << endl;   // 10
    // c.twice(4);                      // ERROR
}
