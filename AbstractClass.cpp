#include<iostream>
using namespace std;

class MobilePrice{
    public:
        virtual void price();
};

class Lava{
    public:
        void price(){
            cout<<"The price of Lava is 20,000."<<endl;
        }
};

class Honor{
    public:
        void price(){
            cout<<"The price of Honor is 45,000."<<endl;
        }
};

class Redmi{
    public:
        void price(){
            cout<<"The price of Redmi is 50,000."<<endl;
        }
};

int main(){
    Lava lava;
    lava.price();
    Honor honor;
    honor.price();
    Redmi redmi;
    redmi.price();
    return 0; 
}

