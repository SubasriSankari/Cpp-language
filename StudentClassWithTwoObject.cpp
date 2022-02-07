#include<iostream>
#include<cstring>
using namespace std;

class Student{
    public:
        string name;
        int roll_no;
        long long int phone;
        string address;
};

int main(){
    
    Student stud1;
    stud1.name = "Sam";
    stud1.roll_no = 1;
    stud1.phone = 7810045325;
    stud1.address = "No.2, Bharathi nagar, Chennai - 600 001.";

    Student stud2;
    stud2.name = "John";
    stud2.roll_no = 2;
    stud2.phone = 8248690919;
    stud2.address = "No.7/A , Vinayagar Street, Poonamallee, Chennai - 600 432.";

    cout<<"\nStudent name is "<< stud1.name <<" with Roll number is : "<< stud1.roll_no <<"\nMobile number : " << stud1.phone <<"\nAddress : "<<stud1.address<<endl<<"\n";
    cout<<"Student name is "<< stud2.name <<" with Roll number is : "<< stud2.roll_no <<"\nMobile number : " << stud2.phone <<"\nAddress : "<<stud2.address;
    
    return 0;
}