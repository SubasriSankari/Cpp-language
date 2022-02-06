#include <iostream>
using namespace std;

void printDigitPattern(int size_digit)
{
    for(int ind1 = 0 ; ind1 < size_digit ; ind1 ++)
    {
        for(int ind2 = 0 ; ind2 < size_digit ; ind2 ++)
        {
            if(ind1 == 0)
            {
                cout<<"*";
            }
            else if((ind1 + ind2) == (size_digit-1) && ind1 != 0)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}

void printRectanglePattern()
{
    for(int ind1 = 0 ; ind1 < 8 ; ind1 ++)
    {
        for(int ind2 = 0 ; ind2 < 25 ; ind2 ++)
        {
            if(ind1 == 0 || ind2 == 0 || ind1 == 7 || ind2 == 24)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}

int main() {
    cout<<"Enter the size of single digit number pattern:\n";
    int size_digit;
    cin>>size_digit;
    printDigitPattern(size_digit);
    printRectanglePattern();
    return 0;
}
