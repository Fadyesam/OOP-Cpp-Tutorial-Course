#include <iostream>
using namespace std;

class BankAccount
{
private:

    // الرصيد يجب أن يكون private لحماية البيانات
    double balance;

    // رقم الحساب أيضًا private
    int accountNumber;

public:

    // Constructor لتحديد القيم الأولية
    BankAccount(int number, double initialBalance)
    {
        accountNumber = number;
        balance = initialBalance;
    }

    // Function للإيداع
    void deposit(double amount)
    {
        if (amount > 0)                 // لا نقبل إيداع قيمة صفر أو سالبة
            balance = balance + amount;
    }

    // Function للسحب
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)   // لا نسحب أكثر من الرصيد
            balance = balance - amount;
    }

    // Function للحصول على الرصيد
    double getBalance()
    {
        return balance;
    }
};

int main()
{
    // إنشاء Object من BankAccount
    BankAccount myAccount(1001, 5000);

    // إيداع 1000
    myAccount.deposit(1000);

    // سحب 500
    myAccount.withdraw(500);

    // طباعة الرصيد النهائي
    cout << "Balance = "
         << myAccount.getBalance() << endl;

    return 0;
}
