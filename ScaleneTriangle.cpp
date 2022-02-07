#include <iostream>
#include <math.h>
#define PI 3.141
using namespace std;

int main() {
    float num1, num2, num3, area;
    cout<<"Enter the side of triangle:\n";
    cin>>num1;
    cout<<"Enter the another side of triangle:\n";
    cin>>num2;
    cout<<"Enter the angle between these sides of the triangle:\n";
    cin>>num3;
    area = (num1 * num2 * sin((PI/180)*num3))/2;
    cout<<"Your area of scalene triangle is : "<<area;
    
    return 0;
}
