#include <iostream>
using namespace std;

void printExp(){
    int a = 20;
    int b = 3;
    int c = 7;
    int d = 2;
    cout<<"Result of 1st expression is : "<< a + b;
    cout<<"\nResult of 2nd expression is : "<< c - d;
    cout<<"\nResult of 3rd expression is : "<< b + c + d;
    cout<<"\nResult of 4th expression is : "<< b;
}

int main(){
    printExp();
    return 0;
}
