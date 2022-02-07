#include<iostream>
#include<math.h>

using namespace std;

bool isPrime(int num)
{
    if(num == 1)
        return false;
    if(num <= 3)
        return true;
    for(int ind = 2 ; ind <= sqrt(num) ; ind++)
        if(num % ind == 0)
            return false;

    return true;
}

void printPrimes(int lower, int upper)
{
    cout<<"The Prime numbers are : \n";
    for(int ind = lower ; ind <= upper ; ind++)
    {
        if(isPrime(ind))
            cout<<ind<<" ";
    }
    cout<<"\n";
}

int main(){
    cout<<"\n****** Prime Number Within Range ****** \n\n";
    cout<<"Enter the lower number:\n";
    int lower , upper;
    cin>>lower;
    cout<<"Enter the upper number:\n";
    cin>>upper;
    printPrimes(lower,upper);
}