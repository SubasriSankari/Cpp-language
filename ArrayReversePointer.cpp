#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the size of array:\n";
    int size;
    cin>>size;
    int array[size];
    int *ptr = array;
    cout<<"Enter the array elements:\n";
    for(int ind = 0 ; ind < size ; ind ++ )
    {
        cin>>array[ind];
    }
    cout<<"Your resultant array elements are:\n";
    for(int ind = size - 1 ; ind >= 0 ; ind --)
    {
        cout<<*(ptr + ind)<<" ";
    }
    return 0;
}
