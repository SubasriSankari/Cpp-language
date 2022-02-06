#include<iostream>
using namespace std;

class Circle{
    public:

        Circle(){
            this->radius = 1;
        }

        Circle(int r){
            this->radius = r;
        }

        int getRadius(){
            return radius;
        }

    private:
        int radius;
};

int main(){

    Circle c1;
    Circle c2(5); 
    cout<<"\nThe Area of Circle is "<< c1.getRadius() * c1.getRadius() * 3.14<<endl;       
    cout<<"The Area of Circle is "<< c2.getRadius() * c2.getRadius() * 3.14<<endl;
}

