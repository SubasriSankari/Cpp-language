#include<iostream>
using namespace std;

int printSecondSmallestElement(int arr[], int size)
{
    int first = 0, second = -1;
    for (int ind = 1; ind < size; ind++) {
        if (arr[ind] < arr[first]) {
            second = first;
            first = ind;
        }
        else if (arr[ind] > arr[first]) {
            if (second == -1 || arr[second] > arr[ind])
                second = ind;
        }
    }
    return second;
}

int main(){
    cout<<"Enter the size of array:\n";
    int size;
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements:\n";
    for(int ind = 0 ; ind < size ; ind ++)
    {
        cin>>arr[ind];
    }
    int result = printSecondSmallestElement( arr , size );
    
    cout<<"The Second smallest number is "<< arr[result]<<".\n";
}