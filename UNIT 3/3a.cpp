#include <iostream>
using namespace std;
class student{
    int m1,m2,m3;
    public:
    void getmarks(){
        cout<<"enter marks in 3 subjects:";
        cin>>m1>>m2>>m3;
    }
    friend class Result;
};
class Result{
    public:
    void displayResult(student s){
        float avg=(s.m1+s.m2+s.m3)/3.0;
        cout<<"Average marks:"<<avg<<endl;
    }
    };
    int main (){
    student s;
    s.getmarks();
    Result r;
    r.displayResult(s);
    return 0;
    }