#include<iostream>
using namespace std;
// Inheritance (အမွှေပေးခြင်း)
class Engine {
    virtual void EngineManagment() = 0;
};
// Parent Class (Base Class)
class Car:Engine {
    public:
    void Drive() {
        cout << "Driving..." << endl;
    }
    void PlayRadio() {
        cout << "Radio playing..." << endl;
    }
};
// Child Class (Derived Class)
// Child Class has its own unique behaviours
class Electric_Car:public Car {
    public:
    // Unique method
    void Recharge() {
        cout << "Recharging..." << endl;
    }
    void EngineManagment() {
        cout << "This car is using Battery cells" << endl;
    }
};
// Child Class (Derived Class)
// Child Class has its own unique behaviours
class Gas_Car:public Car {
    public:
    // Unique method
    void FillGas() {
        cout << "Filling gas..." << endl;
    }
    void EngineManagment() {
        cout << "This car is using Hybird engine" << endl;
    }
};

int main() {
    Electric_Car Tesla;
    Gas_Car Ford;
    // Every car can do
    Tesla.Drive();
    Tesla.PlayRadio();
    Ford.Drive();
    Ford.PlayRadio();

    // Unique Methods
    Tesla.Recharge();
    Ford.FillGas();

    // Abstracting the complex things behide simple procedure
    Tesla.EngineManagment();
    Ford.EngineManagment();

    return 0;
}