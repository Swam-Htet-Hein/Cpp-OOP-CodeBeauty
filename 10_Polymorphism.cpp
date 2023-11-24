#include<iostream>
using namespace std;

/*
    What is Polymorphism
        Poly --> Many
        Morphs --> Forms
        Many forms (ပုံစံအမျိုးမျိုး)
    The common use of polymorphism is when a parent class reference is used to refer to a child class object.
*/

/*
    Polymorphism ဆိုတာ method တစ်ခုတည်းကိုမှ ပုံစံ အများကြီး ကွဲနေတာကို ဆိုလိုတယ်။
    Developer class, Teacher class တို့ဆိုတာ Employee class ကနေ အမွှေဆက်ခံခြင်း ခံရပေမဲ့ Base class (Employee) ရဲ့ အလုပ်လုပ်ပုံ(work) နဲ့ Derived classes (Develper, Teacher) ရဲ့ အလုပ်လုပ်(work) ပုံနဲ့ ကမတူဘူး။သို့သော် အလုပ်လုပ်တဲ့ method ကတော့အတူတူပဲဖြစ်သည်။
*/

class Employee {
protected:
    string Name;
    string Company;
public:
    Employee (string name, string company) {
        Name = name;
        Company = company;
    }
    // virtual သည် child object ထဲမှာလည်းဒီ method ရှိမရှိစစ်တယ်။ ရှိရင် child method ကို invoke လုပ်ပြီး မရှိရင် parent method ကို invode လုပ်တယ်။
    // Base class (Employee) သည် email, backlog, process စစ်မယ်။
    virtual void Work() {
        cout << Name << " is checking Email, Backlog, and Process..." << endl;
    }
};

class Developer:public Employee {
public:
    string ProgrammingLanguage;
    Developer (string name, string company, string programminglanguage)
    :Employee(name, company) {
        ProgrammingLanguage = programminglanguage;
    }
    // Derived class (Developer) ကတော့ code တွေကို ပြင်ဆင်မယ်။
    void Work() {
        cout << Name << " is fixing " << ProgrammingLanguage << " code" << endl;
    }
};

class Teacher:public Employee {
public:
    string Subject;
    Teacher (string name, string company, string subject)
    :Employee(name, company) {
        Subject = subject;
    }
    // Derived class (Teacher) ကတော့ ဘာသာရပ်တွေကိုသင်ကြားမယ်။
    void Work() {
        cout << Name << " is teaching " << Subject << " Subject" << endl;
    }
};

int main() {
    Developer developer("Swam", "Youtube", "C++");
    Teacher teacher("Aung", "MidSchool", "Myanmar");

    Employee * d = &developer;
    Employee * t = &teacher;
    // Parent class (base class) ကနေ child class (derived class) ထဲ့ကို တိုက်ရိုက် method တွေ function တွေကို invoke လုပ်ချင်ရင် parent class pointer နဲ့ base class ရဲ့ object ကိုလှမ်းထောက်။
    d->Work();
    t->Work();

    return 0;
}