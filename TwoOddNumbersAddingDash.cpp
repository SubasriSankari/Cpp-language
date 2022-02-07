#include<iostream>
#include<string>
using namespace std;

int main(){
    cout<<"Enter the String:\n";
    string str;
    cin>>str;
    int len = str.length();
    string word = str;
    for(int ind = 0 ; ind < len - 1 ; ind ++)
    {
        if((str[ind] == '1' || str[ind] == '3' || str[ind] == '5' || str[ind] == '7' || str[ind] =='9') &&(str[ind + 1] == '1' || str[ind + 1] == '3' || str[ind + 1] == '5' || str[ind + 1] == '7' || str[ind + 1] =='9'))
        {
            word.insert(ind + 1,"-");
            str = word;
        }
    }
    cout<<"Your New number is : "<<word;
    
       
    return 0;
}