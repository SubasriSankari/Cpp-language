#include<iostream>
#include<math.h>

using namespace std;

int sumSeries(int val)
{
    int sum = 0;
    for(int ind = 1 ; ind <= val ; ind ++)
        sum += ind;

    return sum;
}

int main(){
    cout<<"\n****** nth Series Sum ****** \n\n";
    cout<<"Enter the number:\n";
    int number;
    cin>>number;
    int sum = 0;
    for(int ind = 1 ; ind <= number ; ind++)
        sum += sumSeries(ind);
    
    cout<<"The Sum of the "<<number<<" Series is "<<sum<<".";
}