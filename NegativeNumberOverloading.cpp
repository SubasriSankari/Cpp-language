#include<iostream>
using namespace std;

class OperatorOverloading{
    public:
        int value;
};

class Negative: public OperatorOverloading{
    public:
        //int value = 0;
        Negative(int value)
        {
            this->value = value;
        }
        Negative operator - ()
        {
            value -= 1;
        }
        void display(){
            cout<<"The value is "<<value;
        }
};

int main(){
    Negative obj(10);
    -obj;
    obj.display();
}