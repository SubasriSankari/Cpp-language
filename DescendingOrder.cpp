#include<iostream>
#include <bits/stdc++.h>
using namespace std;


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
    sort(arr, arr + size, greater<int>());
    cout<<"The Descending order is :\n";
    for(int ind = 0 ; ind < size ; ind ++)
    {
        cout<<arr[ind]<<" ";
    }       
}