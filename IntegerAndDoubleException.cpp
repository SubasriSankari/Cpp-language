#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the Integer:\n";
    cin>>a;

    double b;
    cout<<"Enter the double value:\n";
    cin>>b;
    try{
        if(a%2 == 1)
            throw a;
        else if(b <= 10)
            throw b;
        else
            cout<<"Even."<<endl;
    }
    catch(int a)
    {
        cout<<"Error... this is odd integer."<<endl;
    }
    catch(double b)
    {
        cout<<"Error... this is low level double."<<endl;
    }
    return 0;
}