#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    Student()
    {
        name="Unknown";
    }
    Student(string stud)
    {
        name = stud;
    }
    void display(){
        cout<<"Student name is "<<name<<endl;
    }
};

int main(){
    Student obj;
    obj.display();
    Student obj1("Suba");
    obj1.display();
    
    return 0;
}