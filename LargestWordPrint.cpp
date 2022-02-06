#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the String:\n";
    string str;
    getline(cin, str);
    int len = str.length();

    istringstream newString(str);
    string word;

    int largest = -1;
    string resultString;

    while(newString >> word)
    {
        int word_length = word.length();
        if(word_length > largest){
            largest = word_length;
            resultString = word;
        }
    }
    cout<<"The Largest string of the word is : "<< resultString;
       
    return 0;
}