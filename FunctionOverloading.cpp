#include<iostream>
using namespace std;

class Function{
    public:
    
    int age;
    char ch;

    void display(int n, char c){
        age = n;
        ch = c;
    }
    void display(char c, int n)
    {
        age = n;
        ch = c;
    }
    void Print()
    {
        cout<<"The number is "<<age << " character is "<<ch<<endl;
    }
};

int main(){

    Function obj;
    obj.display(3,'a');
    obj.Print();

    Function obj1;
    obj1.display('b',5);
    obj1.Print();

    return 0;
}