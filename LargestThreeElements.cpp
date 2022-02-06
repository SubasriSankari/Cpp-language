#include<iostream>
using namespace std;

typedef struct index{
    int fir;
    int sec;
    int thr;
}Index;

Index printLargestThreeElements(int arr[], int size)
{
    Index sample;
    int first = 0, second = -1, third = -2;
    for (int ind = 1; ind < size; ind++) {
        if (arr[ind] > arr[first]) {
            third = second;
            second = first;
            first = ind;
        }
        else if (arr[ind] < arr[first]) {
            if (second == -1 || arr[second] < arr[ind])
            {
                third = second;
                second = ind;
            }            
        }
    }
    sample.fir = first;
    sample.sec = second;
    sample.thr = third;
    return sample;
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
    Index result = printLargestThreeElements( arr , size );
    cout<<"The First largest number is "<< arr[result.fir]<<".\n";
    cout<<"The Second largest number is "<< arr[result.sec]<<".\n";
    cout<<"The Third largest number is "<< arr[result.thr]<<".\n";
}