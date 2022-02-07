#include<iostream>
using namespace std;

union example{
    int ex1;
    char ex2;
    float ex3;
};

int main(){
    union example sample1;
    union example sample2;
    union example sample3;
    sample1.ex1 = 100;
    sample2.ex2 = 100;
    sample3.ex3 = 100.20;
    cout<<"Integer sample is "<<sample1.ex1<<endl;
    cout<<"Character sample is "<<sample2.ex2<<endl;
    cout<<"Float sample is "<<sample3.ex3<<endl;
    
    return 0;
}