#include<iostream>
#include<string>
using namespace std;

int main(){
    cout<<"Enter the String:\n";
    string str;
    getline(cin,str);
    int len = str.length();
    int count = 1;
    for(int ind = 0 ; ind < len ; ind++ )
        if(str[ind] == ' ')
            count ++;
    cout<<"The count of the word is : "<<count;

    return 0;
}