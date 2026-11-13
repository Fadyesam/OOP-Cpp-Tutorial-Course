// Problem 2 - Class Book
// الهدف: Constructor + Destructor وملاحظة ترتيب الرسائل
#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    Book(string t) {            // Constructor: يحفظ العنوان ويطبع رسالة الإنشاء
        title = t;
        cout << "Book titled " << title << " is created" << endl;
    }
    ~Book() {                   // Destructor: يطبع رسالة التدمير
        cout << "Book titled " << title << " is destroyed" << endl;
    }
};

int main() {
    Book b1("C++ Programming");
    Book b2("Data Structures");
    return 0;                   // يُدمَّر b2 أولًا ثم b1
}
