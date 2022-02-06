#include<iostream>
using namespace std;

typedef struct date{
    int day;
    int month;
    int year;
}Date;

int main(){
    Date date1;
    Date date2;
    cout<<"Enter the First Date Details:\n";
    cin>>date1.day>>date1.month>>date1.year;
    cout<<"Enter the Second Date Details:\n";
    cin>>date2.day>>date2.month>>date2.year;
    if(date1.day == date2.day && date1.month == date2.month && date1.year == date2.year)
        cout<<"Date Entered Both are equal!!";
    else    
        cout<<"Sorry!! They are not equal...";
}