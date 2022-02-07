#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the string :\n";
    char str[100];
    cin.getline(str, sizeof(str));
    char* ptr;
    ptr = str;
    int length = 0;
    while(*ptr != '\0')
    {
        length ++;
        *ptr++;
    }
    cout<<"The given String length is :"<< length;

    return 0;
}