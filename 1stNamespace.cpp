#include<iostream>
using namespace std;

namespace example{
    void display();
}

void example::display(){
    cout<<"This is inside A";
}

int main(){
    example::display();
    return 0;
}