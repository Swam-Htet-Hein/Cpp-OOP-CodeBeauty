#include<iostream>
using namespace std;

/*
    There are 3 types of access modifiers
    - private (default)
    - public
    - protected
*/
// private ဆိုရင် class အတွင်းထဲမှာရှိတဲ့ ဟာတွေကို အပြင်ယူသုံးလို့မရဘူး
// public ဆိုမှ အပြင်မှာပါယူသုံးခွင့်ရတယ်

class Employee {
    //private: (default)
    public:
    string name;
    string company;
    int age;
};

int main() {
    Employee employee1;
    employee1.name = "Swam";
    employee1.company = "Swam company";
    employee1.age = 21;
    cout << "name : " << employee1.name << endl;
    cout << "company : " << employee1.company << endl;
    cout << "age : " << employee1.age << endl;
    return 0;
}