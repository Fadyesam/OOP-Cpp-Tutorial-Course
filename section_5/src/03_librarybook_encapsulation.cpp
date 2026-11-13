// Section C - Q3: لماذا نجعل البيانات private ونتحكم فيها بدوال؟
#include <iostream>
using namespace std;

class LibraryBook {
private:
    int availableCopies;                 // محمي من التعديل المباشر
public:
    LibraryBook(int copies) {
        availableCopies = (copies >= 0) ? copies : 0;   // لا نقبل قيمة سالبة
    }
    void borrowBook() {
        if (availableCopies > 0) {
            availableCopies--;
            cout << "Book borrowed. Copies left: " << availableCopies << endl;
        } else {
            cout << "No copies available!" << endl;
        }
    }
    void returnBook() {
        availableCopies++;
        cout << "Book returned. Copies now: " << availableCopies << endl;
    }
};

int main() {
    LibraryBook book(1);
    book.borrowBook();
    book.borrowBook();
    book.returnBook();
    // book.availableCopies = -5;    // خطأ: private، والقيمة السالبة غير منطقية
    return 0;
}
