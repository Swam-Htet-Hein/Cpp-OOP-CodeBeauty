#include<iostream>
using namespace std;

// Class သည် အမျိုးမျိုးဖြစ်နိုင်သည်။
// ကားတစ်စီးနဲ့ ပတ်သက်တဲ့ class ဖြစ်လျှင် ကားနဲ့ ဆိုင်တဲ့ attributes တွေ behaviour တွေပါဝင်မယ်။
class Employee {
    string name;
    string company;
    int age;
};

int main() {
    // employee1 ဆိုတဲ့ object ကို သူ့နဲ့ သက်ဆိုင်တဲ့ Employee(class) နဲ့ ကြေညာလိုက်တယ်။
    // employee1 သည် class ရဲ့ object တစ်ခု
    Employee employee1;
    return 0;
}