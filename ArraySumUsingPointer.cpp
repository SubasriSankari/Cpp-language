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
        cin>>ptr[ind];
    }
    int sum = 0;
    for(int ind = size - 1 ; ind >= 0 ; ind --)
    {
        sum += *(ptr + ind);
    }
    cout<<"Your Sum result is : "<<sum;
    return 0;
}
