// Problem 4 - Class Product
// الهدف: Default + Parameterized Constructors + Destructor
#include <iostream>
using namespace std;

class Product {
public:
    double price;

    Product() {                 // Default: يضبط السعر على صفر
        price = 0;
        cout << "Default Product created with price 0" << endl;
    }
    Product(double p) {         // Parameterized: يأخذ السعر
        price = p;
        cout << "Product created with price " << price << endl;
    }
    ~Product() {                // Destructor
        cout << "Product object is being destroyed" << endl;
    }
};

int main() {
    Product p1;                 // Default
    Product p2(99.5);           // Parameterized
    Product p3(150.0);          // Parameterized (يُطبع 150 وليس 150.0)
    return 0;                   // 3 رسائل تدمير
}
