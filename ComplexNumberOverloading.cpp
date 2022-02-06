#include<iostream>
using namespace std;

class OperatorOverloading{
    public:
        int real;
        int imag;
};

class Complex: public OperatorOverloading{
    private:
        int real, imag;
    public:
    Complex(){
        real = 0;
        imag = 0;
    }
    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }
    void print(){

        cout<<"The value of Complex number is :"<<real<<"+i"<<imag;
    }
    Complex operator + (Complex const &obj2){
        Complex obj3;
        obj3.real = real + obj2.real;
        obj3.imag = imag + obj2.imag;
        return obj3;
    }
};

int main(){
    Complex obj1(10,20), obj2(5,10);
    Complex obj3 = obj1 + obj2;
    obj3.print();
}