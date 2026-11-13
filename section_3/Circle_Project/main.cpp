#include <iostream>
using namespace std;
#include "Circle.h"

int main()
{
    Circle c;
    double r = 0;

    cout << "Enter radius: ";
    if (!(cin >> r))                    // المستخدم كتب شيئًا ليس رقمًا
    {
        cout << "Invalid input: please enter a number." << endl;
        return 1;
    }

    c.setRadius(r);

    cout << "Radius: " << c.getRadius() << endl;
    cout << "Area: " << c.getArea() << endl;

    return 0;
}
