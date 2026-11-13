# Circle Project

مشروع صغير من ملفات متعددة: الـ `Circle.h` فيه تعريف الكلاس (declaration)،
والـ `Circle.cpp` فيه التنفيذ (implementation)، والـ `main.cpp` فيه البرنامج الرئيسي.

## التشغيل

Windows (PowerShell):

```powershell
g++ -std=c++17 main.cpp Circle.cpp -o circle_app
.\circle_app
```

Linux / macOS:

```bash
g++ -std=c++17 main.cpp Circle.cpp -o circle_app
./circle_app
# أو ببساطة:
sh build.sh
```

## مثال على التشغيل

```
Enter radius: 7.5
Radius: 7.5
Area: 176.625
```

لو أدخلت قيمة سالبة، يرفضها الـ setter ويطبع `Invalid radius`، ويبقى نصف القطر `0`.
