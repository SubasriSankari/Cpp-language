#include<iostream>
using namespace std;

class Rectangle{
    public:
    
    int length;
    int breadth;

    void area()
    {
        length = 0;
        breadth = 0;
        cout<<"The Area of Rectangle is "<< length * breadth<<endl;
    }
    void area(int val)
    {
        length = val;
        breadth = val;
        cout<<"The Area of Rectangle is "<< length * breadth<<endl;
    }
    void area(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
        cout<<"The Area of Rectangle is "<< length * breadth<<endl;
    }
};

int main(){

    Rectangle obj;
    obj.area();    
    obj.area(2);
    obj.area(2,4);
    return 0;
}