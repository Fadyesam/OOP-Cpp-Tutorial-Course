// Section 4 - Q2 (بعد التصحيح): protected لا يُرى من main
#include <iostream>
using namespace std;

class Account {
protected:
    double balance = 1000;
public:
    double getBalance() const { return balance; }   // الحل: دالة public للقراءة
};

int main() {
    Account a;
    // cout << a.balance;          // خطأ: protected
    cout << a.getBalance() << endl;
    return 0;
}
