#include <iostream>
using namespace std;
class Temprature {
    float celsius;
    public:
    void getData() {
        cout<<"enter temprature in celsius:";
        cin>>celsius;
    }
    void operator-(){
        float fahrenheit=(celsius*9/5)+32;
        cout<<"Temprature in Fahrenheit:"<<fahrenheit<<endl;
    }
};
int main(){
    Temprature t;
    t.getData();
    -t;
    return 0;
}