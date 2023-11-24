#include<iostream>
using namespace std;

/*
    What is Encapsulation?
    Encapsulation is bundling or tying together data and methods that operate on that data so that they are grouped together within a class.

    Why Encapsulation?
    The purpose of preventing anyone or anything outside of our class to be able to directly access our data and to interact with it and to modify it.
*/

class Phone {
private:
    // These are encapsulated data
    // data တွေကို private ထဲမှာ စုစည်းထားပြီး public ထဲမှာပြန်သုံးချင်ရင် set method and get method ဆိုပြီး ကိုယ်ပိုင် method ဆောက်ပြီး ယူသုံးရတယ်။
    // private ထဲ့မှာ စုစည်းသိမ်းဆည်းထားတဲ့ ပုံစံသည် Encapsulation ဖြစ်သည်။
    string Name;
    int Release_Date;
    string Color;
    string Warranty;
    void Introduce() {
        cout << "Name : " << Name << endl;
        cout << "Release Date : " << Release_Date << endl;
        cout << "Color : " << Color << endl;
    }
public:
    // ctrl + / to make comment the whole block

    // setter
    // set method သည် ပြင်ပ function တွေဆီမှာ arguments တွေကိုလက်ခံပြီး encapsulated လုပ်ထားတဲ့ variable ထဲ့ကို value တွေပို့ပေးသည်။
    void setName(string name) {
        Name = name;
    }
    // getter
    // get method သည် encapsulated လုပ်ထားတဲ့ variable‌ တွေကို လှမ်းယူပြီး ပြင်ပ function တွေဆီ ပြန်လည်ပေးပို့သည်။
    string getName() {
        return Name;
    }
    //
    void setReleaseDate(int release_date) {
        Release_Date = release_date;
    }
    int getReleaseDate() {
        return Release_Date;
    }
    // encapsulate လုပ်ပြီး method ကိုသုံးလိုက်ခြင်းအားဖြင့် arguments တွေကို control လုပ်လို့ရတယ်။
    void setColor(string color) {
        if(color != "White")
        Color = color;
    }
    string getColor() {
        return Color;
    }
    // Encapsulated လုပ်ထားတဲ့ method ကို ပြင်ပမှာပါသုံးလို့ရအောင် ပြုလုပ်ခြင်းဖြစ်သည်။
    void getIntroduce() {
        Introduce();
    }
    // set method နဲ့ get method ကို ရောသုံးခြင်းဖြစ်သည်။
    string SetGetWarranty(string warranty) {
        Warranty = warranty;
        return Warranty;
    }

};

int main() {
    Phone Phone_1;
    Phone_1.setName("iPhone 15");
    Phone_1.setReleaseDate(2023);
    Phone_1.setColor("Black");

    cout << "Name : " << Phone_1.getName() << endl;
    cout << "Release Date : " << Phone_1.getReleaseDate() << endl;
    cout << "Color : " << Phone_1.getColor() << endl;

    Phone_1.getIntroduce();

    cout << "Warranty : " << Phone_1.SetGetWarranty("2 years") << endl;

    return 0;
}