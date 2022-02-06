#include<iostream>
#include<math.h>

using namespace std;

int countDigit(int number)
{
    int count = 0;
    while(number)
    {
        count++;
        number /= 10;
    }
    return count;
}

bool checkArmstrongOrNot(int number, int digit)
{
    int temp = number;
    int sum = 0;
    while(temp)
    {
        sum += pow(temp % 10 , digit);
        temp /= 10;
    }
    if(sum == number)
        return true;
    else
        return false;
}

void printArmstrong(int low, int up)
{
    cout<<"The Armstrong numbers between the ranges "<<low<<" and "<<up<<" is :\n";
    for(int ind = low ; ind <= up ; ind ++)
    {
        int digit = countDigit(ind);
        if(checkArmstrongOrNot( ind , digit ))
            cout<<ind<<" ";
    }
}

int main(){
    cout<<"\n****** Armstrong numbers between intervals ****** \n\n";
    cout<<"Enter the lower number:\n";
    int lower;
    cin>>lower;
    cout<<"Enter the upper number:\n";
    int upper;
    cin>>upper;
    printArmstrong( lower , upper );
}