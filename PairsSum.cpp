#include<iostream>
using namespace std;

typedef struct index{
    int first;
    int second;
}Index;

Index printPairElementExistOrNot(int arr[] , int size , int sum)
{
    Index result;
    int fir = -1, sec = -1;
    for(int ind1 = 0 ; ind1 < size ; ind1++)
    {
        for(int ind2 = ind1 + 1; ind2 < size ; ind2++)
        {
            if(arr[ind1] + arr[ind2] == sum)
            {
                fir = ind1;
                sec = ind2;
            }
        }
    }
    if(fir == -1){
        cout<<"Sorry..Pair is not found.\n";
        exit(1);
    }
    result.first = fir;
    result.second = sec;
    return result;
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
    int sum;
    cout<<"The sum element value is:\n";
    cin>>sum;

    Index result = printPairElementExistOrNot( arr , size , sum );
    cout<<"The Index "<< result.first <<" value of the first element is "<<arr[result.first]<<".\n";
    cout<<"The Index "<< result.second <<" value of the second element is "<<arr[result.second]<<".\n";
       
}