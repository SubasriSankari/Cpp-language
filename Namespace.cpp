#include<iostream>
using namespace std;

namespace A{
    namespace B{
        void display();
    };
}

void A::B::display(){
    cout<<"This is inside namespace B."<<endl;
}

int main(){
    
    A::B::display();
    return 0;
}