#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;

class OperatorOverloading{
    public:
        int answer;
    public:
        int getAnswer(){
            return answer;
        }
        void setAnswer(int answ)
        {
            this->answer = answ;
        }
};

OperatorOverloading obj;

class Sum: public OperatorOverloading{
    public:
    int value;
    Sum(int value)
    {
        this->value = value;
    }
    void operator + ()
    {
        obj.answer += value;
    }
};

class Sub: public OperatorOverloading{
    public:
    int value;
    Sub(int value)
    {
        this->value = value;
    }
    void operator - ()
    {
        obj.answer -= value;
    }
};

class Mul: public OperatorOverloading{
    public:
    int value;
    Mul(int value)
    {
        this->value = value;
    }
    void operator * ()
    {
        obj.answer *= value;
    }
};

class Div: public OperatorOverloading{
    public:
    int value;
    Div(int value)
    {
        this->value = value;
    }
    void operator ++ ()
    {
        obj.answer /= value;
    }
};

class Mod: public OperatorOverloading{
    public:
    int value;
    Mod(int value)
    {
        this->value = value;
    }
    void operator -- ()
    {
        obj.answer %= value;
    }
};

class Sqrt: public OperatorOverloading{
    public:
    int value;
    Sqrt(int value)
    {
        this->value = value;
    }
    Sqrt operator ~ ()
    {
        obj.answer += sqrt(value);
    }
};

class Cube: public OperatorOverloading{
    public:
    int value;
    Cube(int value)
    {
        this->value = value;
    }
    void operator & ()
    {
        obj.answer += cbrt(value);
    }
};

void Calci(){
    cout<<"---------------------------------"<<endl;
    cout<<"|  1  |  2  |  3  |  +  |  x^2  |"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"|  4  |  5  |  6  |  -  |  x^3  |"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"|  7  |  8  |  9  |  *  |  CLR  |"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"|  %  |  0  |  .  |  /  |   =   |"<<endl;
    cout<<"---------------------------------"<<endl;
}

int main(){
    
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~ Calculator Application ~~~~~~~~~~~~~~~~~~~~~~\n\n";

    Calci();
    cout<<"\t\t\tans = "<<obj.getAnswer()<<endl;
    char result[10];
    cout<<"Enter any number to calculate:\n";
    cin>>result;
    int value = atoi(result);
    obj.setAnswer(value);
    Calci();
    cout<<"\t\t\tans = "<<obj.getAnswer();
    while(1)
    {
        int extra;
        cin>>result;
        if(*result == '+')
        {
            Calci();
            cout<<"\t\t\tans = "<<obj.getAnswer()<<"+";
            cin>>extra;
            Sum obj1(extra);
            +obj1;
        }
        else if(*result == '-')
        {
            Calci();
            cout<<"\t\t\tans = "<<obj.getAnswer()<<"-";
            cin>>extra;
            Sub obj1(extra);
            -obj1;
        }
        else if(*result == '*')
        {
            Calci();
            cout<<"\t\t\tans = "<<obj.getAnswer()<<"*";
            cin>>extra;
            Mul obj1(extra);
            *obj1;
        }
        else if(*result == '/')
        {
            Calci();
            cout<<"\t\t\tans = "<<obj.getAnswer()<<"/";
            cin>>extra;
            Div obj1(extra);
            ++obj1;
        }
        else if(*result == '%')
        {
            Calci();
            cout<<"\t\t\tans = "<<obj.getAnswer()<<"%";
            cin>>extra;
            Mod obj1(extra);
            --obj1;
        }
        else if(!strcmp(result,"x^2"))
        {
            Calci();
            cout<<"\t\t\tans = "<<obj.getAnswer()<<" + sqrt(?)";
            cin>>extra;
            Sqrt obj1(extra);
            ~obj1;
        }
        else if(!strcmp(result,"x^3"))
        {
            Calci();
            cout<<"\t\t\tans = "<<obj.getAnswer()<<" + cbrt(?)";
            cin>>extra;
            Cube obj1(extra);
            &obj1;
        }
        else if(!strcmp(result,"CLR"))
        {
            obj.answer = 0;
        }
        else if(*result == '=')
        {
            Calci();
            cout<<"\t\t\tans = "<<obj.getAnswer();
            cout<<"\nSee you..\n\n";
            exit(0);
        }
        else
        {
            cout<<"Error..Invalid\n";
            exit(1);
        }
        Calci();
        cout<<"\t\t\tans = "<<obj.getAnswer();        
    }
    return 0;
}