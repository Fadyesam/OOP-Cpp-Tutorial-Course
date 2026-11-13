#include <iostream>
using namespace std;

class Account {
    double balance = 0;
public:
    void deposit(double x) { if (x > 0) balance += x; }   // the rule lives in ONE place
    double getBalance() const { return balance; }
};

int main() {
    Account a;
    a.deposit(100);
    a.deposit(-50);                     // rejected
    // a.balance = -999;                // ERROR
    cout << a.getBalance() << endl;     // 100
}
