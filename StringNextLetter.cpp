#include<iostream>
#include<string>
using namespace std;

int main(){
    cout<<"Enter the String:\n";
    string str;
    cin>>str;
    for(int ind = 0 ; ind < str.length(); ind++)
    {
        int strValue = int(str[ind]);
        if(strValue == 122)
            str[ind] = char(97);
        else if(strValue == 90)
            str[ind] = char(65);
        else
            str[ind] = char(strValue + 1);
    }
    cout<<"Your new string is : "<<str;
    
}