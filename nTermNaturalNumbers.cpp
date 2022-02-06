#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number:\n";
    int number;
    cin>>number;
    int sum = 0;
    cout<<"The Natural numbers are :\n";
    for(int ind = 1 ; ind <= number ; ind ++)
    {
        cout<< ind <<" ";
        sum += ind;
    }
    cout<<"\nYour Natural Number Sum is : "<<sum;
}