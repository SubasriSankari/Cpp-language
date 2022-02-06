#include<iostream>
using namespace std;

bool linearSearch(int arr[] , int size, int key)
{
    size -= 1;
    if(size < 0)
        return false;
    else if(arr[size] == key)
        return true;
    else
        return linearSearch(arr, size, key);
}

int main(){
    cout<<"\n****** Linear Search using Recursion ******\n\n";
    int size;
    cout<<"Enter the size of the array:\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the array Elements:\n";
    for(int ind = 0 ; ind < size ; ind++)
    {
        cin>>arr[ind];
    }
    int key;
    cout<<"Enter the key element to search:\n";
    cin>>key;
    int result = linearSearch(arr , size-- , key);
    if(result)
        cout<<"The Key Element "<<key<<" is found.";
    else
        cout<<"The Key Element "<<key<<" is not found.";

    return 0;
}