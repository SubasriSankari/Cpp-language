#include<iostream>
#include<string>
using namespace std;

int main(){
    cout<<"Enter the First String:\n";
    string str1;
    cin>>str1;
    
    cout<<"Enter the Second String:\n";
    string str2;
    cin>>str2;

    string * ptr;
    ptr = &str1;
    *ptr += str2;

    cout<<"Your Concatenated new String is : "<<*ptr;   

    return 0;
}