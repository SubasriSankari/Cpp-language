#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the Integer:\n";
    cin>>a;
    try{
        if(a%2 == 1)
            throw a;
        else
            cout<<"Even."<<endl;
    }
    catch(int a)
    {
        cout<<"Error... this is odd number."<<endl;
    }
    return 0;
}