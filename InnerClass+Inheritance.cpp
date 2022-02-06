#include<iostream>
using namespace std;

class Area{
    public:
        int breadth = 1;
        int height = 2;
    public:
        class GetValue{
            public:
                GetValue(Area* aObj){
                    aObj->breadth = 2;
                    aObj->height = 4;
                }

                GetValue(Area* aObj, int breadth, int height)
                {
                    aObj->breadth = breadth;
                    aObj->height = height;
                }
        };
   
};

class Triangle: public Area{
    public:
        Triangle(){
            Area aObj;
            Area::GetValue obj(&aObj);
            cout<<"Area of Triangle is "<< (0.5 * aObj.height * aObj.breadth)<<endl;
            Area::GetValue obj1(&aObj, 7, 8);
            cout<<"Area of Triangle is "<< (0.5 * aObj.height * aObj.breadth)<<endl;
        }
};

class Parallelogram: public Area{
    public:
        Parallelogram(){
            Area aObj;
            Area::GetValue obj(&aObj);
            cout<<"Area of Parallelogram is "<< aObj.height * aObj.breadth<<endl;
            Area::GetValue obj1(&aObj, 7, 8);
            cout<<"Area of Parallelogram is "<< aObj.height * aObj.breadth<<endl;
        }
};

int main(){

    Triangle obj;
    Parallelogram obj1;
    
    return 0; 
}

