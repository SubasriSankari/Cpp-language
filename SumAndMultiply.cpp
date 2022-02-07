#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;

class Complex{
    public:
        int real;
        int imag;
        void setData(int r, int i)
        {
            real = r;
            imag = i;
        }
        void Sum(Complex c1 , Complex c2)
        {
            int r = c1.real + c2.real;
            int i = c1.imag + c2.imag;
            cout<<"The Sum of the Complex is "<<r<<"+"<<i<<"i.\n";
        }
        void Difference(Complex c1 , Complex c2)
        {
            int r = c1.real - c2.real;
            int i = c1.imag - c2.imag;
            cout<<"The Difference of the Complex is "<<r<<"+"<<i<<"i.\n";
        }
        
};

int main(){
    
    Complex obj1;
    Complex obj2;
    Complex obj3;
    int real1, imag1, real2, imag2;
    cout<<"Enter the Real value for 1st Complex :\n";
    cin>>real1;
    cout<<"Enter the Imaginary value for 1st Complex :\n";
    cin>>imag1;
    cout<<"Enter the Real value for 2nd Complex :\n";
    cin>>real2;
    cout<<"Enter the Imaginary value for 2nd Complex :\n";
    cin>>imag2;
    obj1.setData( real1, imag1);
    obj2.setData( real2, imag2);
    obj3.Sum(obj1, obj2);
    obj3.Difference(obj1, obj2);

    return 0;
}