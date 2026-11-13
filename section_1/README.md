# Section 1 — Classes & Objects

أول خطوة في الـ OOP: كيف نعرّف `class` ونصنع منه `object`.
كل ملف برنامج مستقل:

```bash
g++ -std=c++17 class.cpp -o demo && ./demo
```

| الملف | الفكرة |
|---|---|
| [`class.cpp`](class.cpp) | كلاس `Student` فيه attributes (`name`, `id`) و method اسمها `display()`، وإنشاء كائنين منه |
| [`class_template.cpp`](class_template.cpp) | قالب عام لشكل الكلاس (private attributes + public behaviors) لتنسخه وتعدّل عليه |
| [`example1.cpp`](example1.cpp) | كلاس `Employee` بثلاثة attributes من أنواع مختلفة (`string`, `int`, `float`) |
| [`example2.cpp`](example2.cpp) | كلاس `Smartphone` فيه behaviors: `makeCall()` و`sendMessage()` و`chargeBattery()` |
| [`example3.cpp`](example3.cpp) | كلاس `BankAccount`: بيانات `private` + constructor + دوال `deposit` و`withdraw` و`getBalance` مع التحقق من القيم |
| [`private_public.cpp`](private_public.cpp) | الفرق بين `private` و`public`: لا نصل إلى `id` مباشرة بل عبر `setID()` و`getID()` |

## الناتج المتوقع لبعض الأمثلة

`class.cpp`:

```
Name: Ahmed
ID: 101
Name: Sara
ID: 102
```

`example3.cpp`:

```
Balance = 5500
```
