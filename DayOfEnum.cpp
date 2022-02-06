#include<iostream>
using namespace std;

enum days{sunday = 1 , monday, tuesday, wednesday, thursday, friday, saturday};

int main(){
    enum days day;
    day = wednesday;
    
    cout<<"Entered day is present in "<<day<<" day.";
    
}