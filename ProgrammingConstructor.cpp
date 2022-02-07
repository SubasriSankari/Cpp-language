#include<iostream>
using namespace std;

class Programming{
    public:
    string name = "I Love ";
    Programming()
    {
        name += "Programming languages";
    }
    Programming(string str)
    {
        name += str;
    }
    void display(){
        cout<<name<<endl;
    }
};

int main(){
    Programming obj;
    obj.display();
    Programming obj1("Suba");
    obj1.display();
    
    return 0;
}