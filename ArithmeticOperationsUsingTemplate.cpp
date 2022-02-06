#include<iostream>
using namespace std;

template<class Temp>
class Arithmetic{
    public:
        Temp num1;
        Temp num2;

    Arithmetic(Temp num1, Temp num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }

    public:
    Temp Add(){
        return this->num1 + this->num2; 
    }

    Temp Sub(){
        return (this->num1 > this->num2) ? this->num1 - this->num2 : this->num2 - this->num1;
    }
 
    Temp Mul(){
        return this->num1 * this->num2;
    }

    Temp Div(){
        return this->num1 / this->num2;
    }

    void display(){
        cout<<"\nThe Addition of Two numbers is : "<< Add()<<endl;
        cout<<"The Subtraction of Two numbers is : "<< Sub()<<endl;
        cout<<"The Multiplication of Two numbers is : "<< Mul()<<endl;
        cout<<"The Division of Two numbers is : "<< Div()<<"\n"<<endl;
    }
};

int main()
{
    Arithmetic<int> class1(10 , 20);
    class1.display();
    
    Arithmetic<float> class2(10.5f , 12.5f);
    class2.display();

    Arithmetic<double> class3(30.25 , 10.75);
    class3.display();
    
    return 0;
}