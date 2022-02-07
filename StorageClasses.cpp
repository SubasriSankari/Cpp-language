#include<iostream>
#include<cstring>
using namespace std;

class mutableEx{
    public:
    int x = 30;
    mutable int y = 40;
};

int staticFunc(){
    static int x = 1;
    ++x;
    return x;
}

int x = 10;
int main(){
    
    extern int x;
    {
        auto x = 20;
        cout<<"auto value is "<<x<<endl;
    }

    cout<<"Extern value is "<<x<<endl;

    register int y;
    y = 3;
    cout<<"Register value is "<<y<<endl;

    cout<<"Static Value is "<<staticFunc()<<endl;
    cout<<"Static Value is "<<staticFunc()<<endl;
    cout<<"Static Value is "<<staticFunc()<<endl;

    const mutableEx example;
    cout<<"Mutable value is "<<example.y<<endl;
    //example.x = 20;
    cout<<"Mutable value is "<<example.x<<endl;
    
    return 0;
}