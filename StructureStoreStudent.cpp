#include<iostream>
using namespace std;

typedef struct student{
    int roll_num;
    char name[30];
    int age;
}Student;

int main(){
    const int size = 5;
    Student stud[size];
    int count = 1;
    for(int ind = 0 ; ind < size ; ind++)
    {
        cout<<"Details of Student "<<count<<" is:\n";
        stud[ind].roll_num = count++;
        cout<<"Enter the name of the Student:\n";
        cin>>stud[ind].name;
        cout<<"Enter the age of the Student:\n";
        cin>>stud[ind].age;
        cout<<"\n";
    } 

    for(int ind = 0 ; ind < size ; ind++)
    {
        cout<<"The Roll number is : "<< stud[ind].roll_num<<". ";
        cout<<"The Name of the Student : "<<stud[ind].name<<". ";
        cout<<"The age of the Student is : "<<stud[ind].age<<".\n";
    } 
    
}