#include<iostream>
using namespace std;

template<class Temp>
Temp arraySum(Temp array[] , int startIndex , int endIndex ,Temp initialValue)
{
    Temp sum = initialValue;
    for(int ind = startIndex ; ind <= endIndex ; ind++ )
        sum += array[ind];

    return sum;
} 

int main()
{
    // ********** Integer ***********
    cout<<"\nEnter the size of the array:\n";
    int size1;
    cin>>size1;
    int array1[size1];

    cout<<"Enter the array elements:\n";
    for(int ind = 0 ; ind < size1 ; ind ++)
        cin>>array1[ind];

    int startIndex1;
    cout<<"Enter the starting index to sum:\n";
    cin>>startIndex1;

    int endIndex1;
    cout<<"Enter the ending index to sum:\n";
    cin>>endIndex1;

    int initialValue1;
    cout<<"Enter the Initial Value to add into the sum :\n";
    cin>>initialValue1;
    
    cout<<"The Sum of the array is : "<< arraySum( array1 , startIndex1 , endIndex1 , initialValue1)<<endl;

    // ******** Float ********
    cout<<"\nEnter the size of the array:\n";
    int size2;
    cin>>size2;
    float array2[size2];
    
    cout<<"Enter the array elements:\n";
    for(int ind = 0 ; ind < size2 ; ind ++)
        cin>>array2[ind];

    int startIndex2;
    cout<<"Enter the starting index to sum:\n";
    cin>>startIndex2;

    int endIndex2;
    cout<<"Enter the ending index to sum:\n";
    cin>>endIndex2;

    float initialValue2;
    cout<<"Enter the Initial Value to add into the sum :\n";
    cin>>initialValue2;
    
    cout<<"The Sum of the array is : "<< arraySum( array2 , startIndex2 , endIndex2 , initialValue2 )<<endl;

    // ******** Double **********
    cout<<"\nEnter the size of the array:\n";
    int size3;
    cin>>size3;
    double array3[size3];
    
    cout<<"Enter the array elements:\n";
    for(int ind = 0 ; ind < size3 ; ind ++)
        cin>>array3[ind];

    int startIndex3;
    cout<<"Enter the starting index to sum:\n";
    cin>>startIndex3;

    int endIndex3;
    cout<<"Enter the ending index to sum:\n";
    cin>>endIndex3;

    double initialValue3;
    cout<<"Enter the Initial Value to add into the sum :\n";
    cin>>initialValue3;
    
    cout<<"The Sum of the array is : "<< arraySum( array3 , startIndex3 , endIndex3 , initialValue3 )<<endl;
 
    return 0;
} 