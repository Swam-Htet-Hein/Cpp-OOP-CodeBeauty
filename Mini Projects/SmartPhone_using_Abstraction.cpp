#include<iostream>
using namespace std;

class Feature {
    virtual void Sefile() = 0;
    virtual void TellTime(string) = 0;
    virtual void MakeCall() = 0;
};

class Android:Feature {
    string Time;
public:
    void Sefile() {
        cout << "Android Sefile Taking..." << endl;
    }
    void TellTime(string time) {
        Time = time;
        cout << "Android said It's " << Time << endl;
    }
    void MakeCall() {
        cout << "Android Calling..." << endl;
    }
};

int main() {
    Android vivo;
    vivo.Sefile();
    vivo.TellTime("12:00");
    vivo.MakeCall();
    
    return 0;
}