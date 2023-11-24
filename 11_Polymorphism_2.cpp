#include<iostream>
using namespace std;

class Animal {
    protected:
    string Name;
    int Relation = 0;
    public:
    Animal (string name) {
        Name = name;
    }
    void Eat() {
        cout << Name << " is eating..." << endl;
    }
    // virtual သည် child object ထဲမှာလည်းဒီ method ရှိမရှိစစ်တယ်။ ရှိရင် child method ကို invoke လုပ်ပြီး မရှိရင် parent method ကို invode လုပ်တယ်။
    virtual void Speak() {
        cout << Name << " said ..." << endl;
    }
    virtual void CheckRelation() {
        if (Relation > 2) {
            cout << "You have good relation with " << Name << endl;
        } else {
            cout << "You have bad relation with " << Name << endl;
        }
    }
};

class Dog:public Animal {
    public:
    Dog (string name):Animal(name) {
        //
    }
    void Speak() {
        cout << Name << " is Barking..." << endl;
    }
    void Play() {
        Relation++;
    }
};

class Cat:public Animal {
    public:
    Cat (string name):Animal(name) {
        //
    }
    void Speak() {
        cout << Name << " is Meowing..." << endl;
    }
    void Play() {
        Relation++;
    }
};

int main() {
    Dog dog = Dog("Getty");
    Cat cat = Cat("Pucy");
    
    dog.Play();
    dog.Play();
    dog.Play();
    cat.Play();

    Animal *dg = &dog;
    Animal *ct = &cat;

    dg->CheckRelation(); // = dog.CheckRelation();
    dg->Speak(); // = dog.Speak();
    ct->CheckRelation(); // = cat.CheckRelation();
    ct->Speak(); // = cat.Speak();

    // Parent class (base class) ကနေ child class (derived class) ထဲ့ကို တိုက်ရိုက် method တွေ function တွေကို invoke လုပ်ချင်ရင် parent class pointer နဲ့ base class ရဲ့ object ကိုလှမ်းထောက်။

    return 0;
}