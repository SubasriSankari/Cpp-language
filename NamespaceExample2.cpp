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
