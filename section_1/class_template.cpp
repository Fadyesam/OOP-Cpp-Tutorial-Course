// قالب (Template) لشكل الـ Class: استبدل الأسماء والأنواع بما تحتاجه
// ملاحظة: dataType هنا مجرد اسم تعريفي (placeholder) كي يُترجم الملف،
// وفي الكلاس الحقيقي اكتب النوع مباشرة مثل: int أو double أو string
using dataType = int;

class ClassName
{
private:

    // Private Attributes
    dataType variable1;
    dataType variable2;

public:

    // Public Behavior
    void function1()
    {
        // code
    }

    // Public Behavior
    void function2()
    {
        // code
    }
};

int main()
{
    ClassName object1;
    (void)object1;   // لتجنب تحذير "unused variable"

    return 0;
}
