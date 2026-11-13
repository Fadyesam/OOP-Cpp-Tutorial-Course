#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
public:
    Book(string t) : title(t) {}
    string getTitle() const { return title; }   // accessor
};

int main() {
    Book b("C++ Basics");
    cout << b.getTitle() << endl;       // C++ Basics
}
