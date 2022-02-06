#include<iostream>
using namespace std;

class Bank{
    public:
        void setBalance(int value){
            balance = value;
        }
        int getBalance(){
            return balance;
        }
        
    protected:
        int balance;
};

class BankA : public Bank
{
            
};

class BankB : public Bank
{
    
};

class BankC : public Bank
{
    
};

int main(){

    BankA obj1;
    obj1.setBalance(1000);
    BankB obj2;
    obj2.setBalance(2000);
    BankC obj3;
    obj3.setBalance(3000);

    cout<<"Bank A balance is "<<obj1.getBalance()<<endl;
    cout<<"Bank B balance is "<<obj2.getBalance()<<endl;
    cout<<"Bank C balance is "<<obj3.getBalance()<<endl;
    return 0;
}