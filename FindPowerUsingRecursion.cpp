#include <iostream>
using namespace std;

int FindPower(int number , int power)
{
    if(power == 0)
        return 1;
    else
        return number * FindPower(number, power-1);
}

int main()
{
    cout<<"\n ****** Find power using Recursion ******\n\n";

    cout<<"Enter the Number:\n";
    int number;
    cin>>number;
    
    cout<<"Enter the power value:\n";
    int power;
    cin>>power;

    int result = FindPower(number , power);
    cout<<"The number "<<number<<" power of "<<power<<" is "<<result<<".\n";    

    return 0;
}