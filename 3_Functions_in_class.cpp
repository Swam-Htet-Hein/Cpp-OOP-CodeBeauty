#include<iostream>
using namespace std;

class Employee {
    //private: (default)
    public:
    string name;
    string company;
    int age;

    // Class Methods (Function in a class)
    void IntroYourSelf() {
        cout << "name : " << name << endl;
        cout << "company : " << company << endl;
        cout << "age : " << age << endl;
    }

};

int main() {
    Employee employee1;
    employee1.name = "Swam";
    employee1.company = "Swam company";
    employee1.age = 21;
    // call class methods
    employee1.IntroYourSelf();
    // Create another employee
    Employee employee2;
    employee2.name = "SpongeBob";
    employee2.company = "KrastyCrab";
    employee2.age = 25;
    employee2.IntroYourSelf();

    return 0;
}