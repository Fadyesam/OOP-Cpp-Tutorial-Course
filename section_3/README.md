# Section 3 — Encapsulation & Class Organization

أمثلة محلولة تغطي: التحكم في الوصول (`private/public`)، الـ `getters/setters`، الدوال الـ `const`،
عامل النطاق `::`، الدوال الـ `inline`، وفصل الكلاس إلى ملف رأس `.h` وملف تنفيذ `.cpp`.

## مشروع كامل: `Circle_Project`

مشروع من ثلاثة ملفات (`Circle.h` / `Circle.cpp` / `main.cpp`). راجع [`Circle_Project/README.md`](Circle_Project/README.md).

```bash
cd Circle_Project
g++ -std=c++17 main.cpp Circle.cpp -o circle_app && ./circle_app
```

## الأمثلة (`Examples/`)

كل مجلد فيه ملف `main.cpp` (والمجلدات التي فيها ملفات إضافية مكتوب بجانبها *multi-file*). التسمية: `S` رقم القسم في الورقة، ثم نوع السؤال، ثم رقمه.

### S1 — Multiple Choice

| المجلد | الفكرة التي يوضحها | الناتج |
|---|---|---|
| `S1_MCQ_Q1` | الـ setter يرفض القيم غير الصحيحة، والـ `private` لا يُعدَّل مباشرة | `12` |
| `S1_MCQ_Q2` | الوضع الافتراضي: `class` ← `private`، و`struct` ← `public` | `7 1` |
| `S1_MCQ_Q3` | الكائن `const` يقبل استدعاء الدوال الـ `const` فقط | `3 2` |
| `S1_MCQ_Q4` | تعريف الدالة خارج الكلاس باستخدام `Circle::` | `5` |
| `S1_MCQ_Q5` | الـ setter (mutator) مع التحقق من القيمة | `Invalid radius` ثم `5` |
| `S1_MCQ_Q6` | الـ accessor يجب أن يكون `const` ليعمل مع كائن `const` | `2 12.56` |
| `S1_MCQ_Q7` | النقطة `.` مع الكائن، والسهم `->` مع المؤشر | `4` ثم `6` |
| `S1_MCQ_Q8` | قاعدة التحقق مكتوبة في مكان واحد داخل الكلاس | `100` |
| `S1_MCQ_Q9` *(multi-file)* | فصل `Rectangle.h` عن `Rectangle.cpp` | `12` |

### S2 — True / False

| المجلد | الفكرة | الناتج |
|---|---|---|
| `S2_TrueFalse_Q1` | يمكن تكرار `public:` و`private:` أكثر من مرة في الكلاس | `Ali 20` |
| `S2_TrueFalse_Q2` | بدون specifier الكلاس `private` (وليس `protected`)، والـ `struct` عام | `5` |
| `S2_TrueFalse_Q3` | الدالة `const` لا تعدّل الأعضاء | `2` |
| `S2_TrueFalse_Q4` | setter مع نطاق مسموح (GPA من 0 إلى 4) | `3.5` |
| `S2_TrueFalse_Q5` | الـ getter يرجع القيمة ولا يغيّرها | `Mona` |
| `S2_TrueFalse_Q6` | لا يمكن الوصول إلى `private` مباشرة | `5` |
| `S2_TrueFalse_Q7` | التحقق داخل الـ setter يتجاهل القيمة السالبة | `0` |
| `S2_TrueFalse_Q8` | الـ constructor له نفس اسم الكلاس وبلا return type | `Constructor called` |

### S3 — Complete

| المجلد | الفكرة | الناتج |
|---|---|---|
| `S3_Complete_Q1` | كلمة `const` بعد أقواس الدالة | `6` |
| `S3_Complete_Q2` | ربط الدالة بالكلاس بـ `Student::` | `15` |
| `S3_Complete_Q3` | دالة `private` مساعدة وواجهة `public` | `10` |
| `S3_Complete_Q4` | الدوال الـ `inline` (داخل الكلاس أو بكلمة `inline`) | `25 20` |
| `S3_Complete_Q5` | setter من نوع `bool` | `1` |
| `S3_Complete_Q6` | الـ accessor الذي يرجع `string` | `C++ Basics` |
| `S3_Complete_Q7` *(multi-file)* | فصل `Student.h` عن `Student.cpp` | `9` |
| `S3_Complete_Q8` | أكثر من constructor (default + بباراميتر مع تحقق) | `0 2.5` |

### S4 — Matching

`S4_Matching` برنامج واحد، وكل جزء فيه عليه حرف (`A` إلى `F`) يطابق عنصرًا في التمرين: ملف `.h` و`.cpp`، الـ `const member function`، عامل `::`، البيانات `private`، والـ constructor. الناتج: `12.56`.

## تشغيل مثال

ملف واحد:

```bash
g++ -std=c++17 Examples/S1_MCQ_Q1/main.cpp -o demo && ./demo
```

مثال *multi-file*:

```bash
cd Examples/S1_MCQ_Q9
g++ -std=c++17 main.cpp Rectangle.cpp -o demo && ./demo
```
