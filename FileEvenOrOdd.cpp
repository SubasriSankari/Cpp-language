#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;

bool checkPrime(int number)
{
    for(int ind = 2 ; ind <= sqrt(number) ; ind ++)
        if(number % ind == 0)
            return false;
    return true;
}

int main(){
    ifstream file("Numbers.txt");
    ofstream anotherFile("Result.txt");

    int num;
    if(!file)
        cout<<"File not opened";
    else
        file>>num;

    if(num % 2 == 0)
        anotherFile<<"The Number "<< num <<" is Even Number."<<endl;
    else
        anotherFile<<"The Number "<< num <<" is Odd Number."<<endl;

    bool result = checkPrime(num);

    if(result)
        anotherFile<<"The Number "<< num <<" is Prime Number."<<endl;
    else
        anotherFile<<"The Number "<< num <<" is Not Prime Number."<<endl;

    file.close();
    anotherFile.close();
    return 0;
}