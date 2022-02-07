#include<iostream>
#include<math.h>

using namespace std;

void printPattern(int num)
{
    for(int ind = 1; ind <= num ; ind++)
    {
        for(int ind1 = 1; ind1 <= num ; ind1 ++)
            cout<<"# ";
            
        cout<<"\n";
    }
}

int main(){
    cout<<"\n****** square pattern ****** \n\n";
    cout<<"Enter the number:\n";
    int number;
    cin>>number;
    cout<<"The Pattern of the "<<number<<" is:\n\n";
    printPattern(number);
}