#include<iostream>
#include<string>
using namespace std;

int main(){
    cout<<"Enter the String:\n";
    string str;
    getline(cin, str);
    for(int ind = 0 ; ind < str.length()-1 ; ind ++)
    {
        if(ind == 0 || str[ind-1] == ' ')
        {
            str[ind] = toupper(str[ind]);
        }
    }
    cout<<"Your new String is : "<<str;
    return 0;
}