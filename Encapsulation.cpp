#include<iostream>
using namespace std;

class Encapsulation{
    private:
        int salary;

    public:
        void salaryOfFinance()
        {
            salary = 20000;
        }
        void salaryOfSales()
        {
            salary = 10000;
        }
        int displaySalary(){
            return salary;
        }
};

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

