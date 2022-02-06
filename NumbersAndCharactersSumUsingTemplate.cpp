#include<iostream>
using namespace std;

int digits = 0;
string characters ="";

template<typename Temp>
Temp sumDigitsAlpha(Temp str)
{
    Temp key = "";
    for(char ch : str)
    {
        if(isdigit(ch))
        {
            key += ch;
        }
        else
        {
            digits += atoi(key.c_str());
            key="";
        }
        if(isalpha(ch))
        {
            characters += ch;
        }
    }
    digits += atoi(key.c_str());
    cout<<"The String is " << characters<<endl;
    cout<<"The Numbers Sum is " << digits<<endl;
} 

int main()
{
    
    cout<<"\nEnter the String:\n";
    string str;
    cin>>str;

    sumDigitsAlpha(str);
    
    return 0;
}