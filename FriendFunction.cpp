#include<iostream>
using namespace std;

class Encapsulation{
    private:
        int salary;

    public:
        friend void salaryOfFinance();
        friend void salaryOfSales();
        
        int displaySalary(){
            return salary;
        }
};

void salaryOfFinance(){
    salary = 2000;
}

void salaryOfSales(){
    salary = 1000;
}

class Salary: public Encapsulation{
    public:
        Salary(){
            salaryOfFinance();
            cout<<"Finance Department salary is "<<displaySalary()<<endl;
            salaryOfSales();
            cout<<"Sales Department salary is "<<displaySalary()<<endl;
        }
};

int main(){
    Salary obj;
    return 0; 
}

