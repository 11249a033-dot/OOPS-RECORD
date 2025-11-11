#include <iostream>
using namespace std;
class laptop {
    public:
    string brand;
    string Processor;
    int ram;
    void display() {
        cout<<"Brand:"<<brand<<",Processor:"<<Processor<<",RAM:"<<ram<<"GB"<<endl;
    }
};
int main(){
    laptop a,b;
    a.brand = "Dell";
    a.Processor="intel:5";
    a.ram=8;
    b.brand="HP";
    b.Processor="AMD Ryzen 5";
    b.ram=16;
    a.display();
    b.display();
    return 0;
}

