#include<iostream>
using namespace std;

class Employee {
    /*
        Access Modifier : private 
        သည် parent class မှလွဲ၍ ဘယ်မှာမှအသုံးချခွင့်မပေးဘဲ private အနေနဲ့ ကာကွယ်ထားသည်။

        Access Modifier : protected
        သည် parent class မှာကော သူရဲ့ child class(sub-class) မှာပါ အသုံးခုခွင့် ပေးထားသည်။ သို့သော်ပြင်ပ class တွေ function တွေမှာတော့ အသုံးပြုခွင့် ပိတ်ထားသည်။
    */
    protected:
    string Name;
    string Company;
    public:
    Employee (string name, string company) {
        Name = name;
        Company = company;
    }

    string getName() {
        return Name;
    }
    string getCompany() {
        return Company;
    }
};

class Developer:Employee {
    public:
    string FavProLang;
    Developer (string name, string company, string favprolang):Employee(name, company) {
        FavProLang = favprolang;
    }
    // Using Encapsulated Data with get method from parent class because of access modifier:private
    void Introduce_Private() {
        cout << "Name : " << getName() << endl;
        cout << "Company : " << getCompany() << endl;
        cout << "Fav Language : " << FavProLang << endl;
    }
    // Using Data directly from parent class because of access modifier:protected
    void Introduce_Protected() {
        cout << "Name : " << Name << endl;
        cout << "Company : " << Company << endl;
        cout << "Fav Language : " << FavProLang << endl;
    }
};

int main() {
    Developer developer_1("Htet", "Youtube", "C++");

    developer_1.Introduce_Private();
    developer_1.Introduce_Protected();
    
    return 0;
}