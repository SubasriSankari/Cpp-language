#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;

class Triangle{
    public:
        int area(int s1, int s2, int s3);
        int perimeter(int s1, int s2, int s3);
};

int Triangle::area(int s1, int s2, int s3)
{
    float s=(( s1 + s2 + s3 ) / 2.0);
    float A=sqrt( s * ( s - s1 ) * ( s - s2 ) * ( s - s3 ) );
    return A;
}

int Triangle::perimeter(int s1, int s2, int s3)
{
    return s1 + s2 + s3;
}

int main(){
    
    Triangle obj;
    int side1, side2, side3;
    cout<<"Enter the three sides :\n";
    cin>>side1>>side2>>side3;
    cout<<"Area of The Triangle is "<<obj.area( side1 , side2 , side3 )<<endl;
    cout<<"Perimeter of The Triangle is "<<obj.perimeter( side1 , side2 , side3 );

    return 0;
}