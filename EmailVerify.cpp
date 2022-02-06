#include<iostream>
using namespace std;

int main(){

    string email;
    cout<<"Enter the email address:\n";
    cin>>email;
    int at = -1, dot = -1;
    try{
        for(int ind = 0 ; ind < email.length() ; ind ++)
        {
            if(email[ind] == '@')
                at = ind;
            if(email[ind] == '.')
                dot = ind;
        }
        if(at == dot || at > dot)
        {
            throw "Wrong Email Address";
        }
        else{
            cout<<"Correct email address:)";
        }
    }
    catch(const char *str)
    {
        cout<<"Error.."<<str<<endl;
    }
    
    return 0;
}