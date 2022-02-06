#include <iostream>
#include <algorithm>
using namespace std;

typedef struct time{
    int hr;
    int min;
    int sec;
}Time;
 
int main()
{
    cout<<"\n ****** Adding Two Time Object using Pointer ******\n\n";

    cout<<"Enter the First Time : (hh:mm:ss)\n";
    Time time1;
    cin>>time1.hr>>time1.min>>time1.sec;
    
    cout<<"Enter the Second Time : (hh:mm:ss)\n";
    Time time2;
    cin>>time2.hr>>time2.min>>time2.sec;
    
    Time result;
    result.sec = time1.sec + time2.sec;
    result.min = time1.min + time2.min + (result.sec/60);
    result.hr = time1.hr + time2.hr + (result.min/60);
    result.min %= 60;
    result.sec %= 60;

    cout<<"The Addition of two time is "<< result.hr <<":"<< result.min <<":" <<result.sec <<".\n";
    
    return 0;
}