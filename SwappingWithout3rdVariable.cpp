#include <iostream>
using namespace std;

int number1;
int number2;

void swap(){
    number1 *= number2;
    number2 = number1 / number2;
    number1 /= number2;
}

int main(){

    cout<<"Enter the First number:\n";
    cin>>number1;
    cout<<"Enter the Second number:\n";
    cin>>number2;
    cout<<"Before Swapping the numbers are:\n";
    cout<<"Number1 : "<<number1<<" Number2 : "<<number2;
    swap();
    cout<<"\nAfter Swapping the numbers are:\n";
    cout<<"Number1 : "<<number1<<" Number2 : "<<number2;
    
    return 0;
}
