#include<iostream>
#include<cstring>
using namespace std;

int main(){
    cout<<"Enter the string :\n";
    char str[100];
    cin.getline(str, sizeof(str));
    char* ptr;
    ptr = new char;
    strcpy(ptr,str);    
    cout<<"The Copy of Another String is :"<< ptr;

    return 0;
}