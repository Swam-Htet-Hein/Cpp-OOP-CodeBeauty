#include<iostream>
using namespace std;

/*
    What is Abstraction?
    Abstraction is hiding complex things behind a procedure that makes those things look simple
    MM - user တွေအနေနဲ့ လွယ်ကူစွာအသုံးပြုနိုင်ဖို့နောက်ကွဲမှာရှိတဲ့ procedure တွေကို hiding လုပ်ထားပေးထားတာကို abstraction(ဖွက်ထားခြင်း) လို့ခေါ်တယ်။

*/

// constract စာချုပ်
// constract မှာ သူနဲ့ assign လုပ်မဲ့ class တွေကို provide လုပ်ပေးမဲ့ rule တွေရှိတယ်။
// အဲဒီ rule တွေကို သေသေချာချာ provide(ဖြည့်ဆည်းပေးဖို့) pure virtual function ဖြစ်ဖို့လိုတယ်။
class AbstractEmployee {
    // AskForPromotion() သည် pure virtual function အဖြစပြောင်းလဲသွားပြီး provide လုပ်ရန်အဆင်သင့်ဖြစ်နေသည်။
    virtual void AskForPromotion() = 0;
};

// အကယ်၍ abstract class ကို လက်ခံစာချုပ်ချုပ်လိုက်ပြီဆိုရင် သူ့ထဲ့ က rule တွေကို လိုက်နာပေးရမယ်။
// AskForPromotion() ကို invoke လုပ်ကိုလုပ်ရမယ်ဆိုတဲ့ rule လိုမျိုးပေါ့။
// Rule ကို လိုက်နာပြီ implement လုပ်ပြီးရင် abstract ဆိုတဲ့ အတိုင်း hidden လုပ်ထားပေတော့မှာပါ။ဒါဆို တခြား developer တစ်ယောက်က ကိုယ်ဖန်တီးထားတဲ့ Employee class ကိုသုံးတော့မယ်ဆိုရင် ဒီ class က AbstractEmployee ဆိုတဲ့ abstract class နဲ့ sign(စာချုပ်) ချုပ်ထားတာကို သိတဲ့ အတွက် ဒီ စာချုပ်ထဲမှာပါတဲ့ AskForPromotion() ဆိုတဲ့ method ကို လွယ်လွယ်ကူကူနဲ့ အတွင်းကျကျသိစရာမလိုဘဲ အသုံးချနိုင်မယ်။
class Employee:AbstractEmployee {
private:
    string Name;
    string Company;
    int Age;
public:
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
    void IntroYourself() {
        cout << "Name : " << Name << endl;
        cout << "Company : " << Company << endl;
        cout << "Age : " << Age << endl;
    }
    void AskForPromotion() {
        // abstracted logical and complex
        // AskForPromotion() သည် ဒီအထဲမှာရှိတဲ့ complex logic တွေကို hidden လုပ်ပေးဖို့ သဘောတူ စာချုပ်ချုပ်ထားတဲ့ abstract class တစ်ခုရဲ့ abstract method ဖြစ်သည်။
        // ဒါကြောင့် တစ်ခြား developer တစ်ယောက်ကလာပြီး ဒီ class ကို အသုံးပြုရင် အောက်က logic တွေကို သိစရာလိုတော့မှာမဟုတ်ဘဲ့ AskForPromotion() ဆိုတဲ့ ရိုးရှင်းတဲ့ method ကို ကောက်သုံးလို့ရမှာပါ။
        if (Age > 30) {
            cout << Name << " is promoted" << endl;
        } else {
            cout << Name << ", sorry you are not promoted" << endl;
        }
    }
};

int main() {
    Employee employee_1 = Employee("SpongeBob", "KrastyCrab", 21);
    employee_1.IntroYourself();
    Employee employee_2 = Employee("SquidWard", "KrastyCrab", 22);
    employee_2.IntroYourself();

    employee_1.AskForPromotion();
    employee_2.AskForPromotion();

    return 0;
}