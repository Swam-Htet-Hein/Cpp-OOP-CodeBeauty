#include<iostream>
using namespace std;

class car {
public:
    string name;
    int manufacture_year;
    char brand_class;
    car (string Name, int Year, char Class) {
        name = Name;
        manufacture_year = Year;
        brand_class = Class;
        describe_car();
    }
    void describe_car() {
        cout << "Name : " << name << endl;
        cout << "Manufacture date : " << manufacture_year << endl;
        cout << "Brand Class : " << brand_class << endl;
    }
};

int main() {
    car car_1("Ford", 2018, 'B');
    car car_2("BMW", 2020, 'A');
    return 0;
}