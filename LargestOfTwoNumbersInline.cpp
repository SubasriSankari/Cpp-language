#include <iostream>
#include <algorithm>
using namespace std;

inline void largestNumber(int num1, int num2)
{
    num1 > num2 ? (cout<<"Number 1 is Greater.\n"):(cout<<"Number 2 is Greater.\n");
}

int main()
{
    cout<<"\n ****** Adding Two Time Object using Pointer ******\n\n";

    cout<<"Enter the First Number:\n";
    int number1;
    cin>>number1;
    
    cout<<"Enter the Second Number:\n";
    int number2;
    cin>>number2;

    largestNumber(number1 , number2);
        
    return 0;
}