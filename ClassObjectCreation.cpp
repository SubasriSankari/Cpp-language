#include<iostream>
#include<cstring>
using namespace std;

class Student{
    public:
        string name;
        int roll_no;
};

int main(){
    
    Student stud1;
    stud1.name = "John";
    stud1.roll_no = 2;
    cout<<"Student name is "<< stud1.name <<" with Roll number is : "<< stud1.roll_no ;
    
    return 0;
}