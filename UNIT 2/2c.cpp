#include <iostream>
using namespace std;
class BankTransaction{
    private:
    string accountholder;
    double amount;
    public:
    BankTransaction(string name,double amt){
        accountholder=name;
        amount=amt;
        cout<<"Transaction started for"<<accountholder<<",with amount:"<<amount<<endl;
    }
    BankTransaction(){
        cout<<"Transaction comleted for "<<accountholder<<",Amount:"<<amount<<"processed"<<endl;
    }
};
int main(){
    cout<<"Bank Transaction system\n";
    {
        BankTransaction t1 ("dhana",10000);
        BankTransaction t2 ("Navya",50000);
    }
    cout<<"end of program.\n";
    return 0;
}
