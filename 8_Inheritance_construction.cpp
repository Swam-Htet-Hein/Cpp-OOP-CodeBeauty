#include<iostream>
using namespace std;

class Employee {
    public:
    string Name;
    string Company;
    int Age;

    void IntroYourself() {
        cout << "Name : " << Name << endl;
        cout << "Company : " << Company << endl;
        cout << "Age : " << Age << endl;
    }
    // Own constructor
    Employee (string name, string company,int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

class Scientist:Employee {
    public:
    string StudyField;
    // Parent class မှာကတည်းက own constructor ရှိပြီးတဲ့အတွက် child class မှာလည်း own constructor တစ်ခုထပ်ဆောက်ရတယ်။
    // name, company and age တွေဟာ parent class မှာရှိတဲ့ အတွက် :Parent class (name, company, age) ဆိုပြီး ပြန်ခေါ်ပေးရတယ်။
    Scientist (string name, string company,int age, string studyfield):Employee(name, company, age) {
        StudyField = studyfield;
    }

    void ScientistIntro() {
        cout << "Name : " << Name << endl;
        cout << "Company : " << Company << endl;
        cout << "Age : " << Age << endl;
        cout << "StudyField : " << StudyField << endl;
    }
};

int main() {
    Employee employee_1 = Employee("SpongeBob", "Krusty Krap", 21);
    employee_1.IntroYourself();

    Scientist scientist_1 = Scientist("Patty", "TreeHouse", 18, "Chemisty");
    scientist_1.ScientistIntro();

    return 0;
}