#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;

class Rectangle{
    public:
        int length;
        int breadth;
        void setDim(int len, int brd){
            length = len;
            breadth = brd;
        }
        int getArea();
};

int Rectangle::getArea()
{
    return length * breadth;
}

int main(){
    
    Rectangle obj;
    int length, breadth;
    cout<<"Enter the length of the Rectangle :\n";
    cin>>length;
    cout<<"Enter the Breadth of the Rectangle :\n";
    cin>>breadth;
    obj.setDim( length , breadth );
    cout<<"Area of The Rectangle is "<<obj.getArea();

    return 0;
}