#include<iostream>
#include "NamespaceExample.cpp"
#include "NamespaceExample2.cpp"

using namespace std;

int main(){
    
    A::B::display();
    example::display();
    return 0;
}