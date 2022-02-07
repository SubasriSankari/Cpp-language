#include<iostream>
using namespace std;

void printUniqueElements(int arr[] , int size)
{
    cout<<"The Unique elements are :\n";
    for(int ind1 = 0 ; ind1 < size ; ind1++)
    {
        int status = 1;
        for(int ind2 = ind1 + 1 ; ind2 < size ; ind2++)
        {
            if(arr[ind1] == arr[ind2])
                status = 0;
        }
        if(status)
            cout<<arr[ind1]<<" ";
    }
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
    printUniqueElements( arr , size );
    
    
}