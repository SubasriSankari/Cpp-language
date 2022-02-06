#include<iostream>
using namespace std;

class OperatorOverloading{
    public:
        int matrix[3][3];
};

class Matrix: public OperatorOverloading{
    public:
        void setValue(int mat[3][3])
        {
            for(int ind = 0 ; ind < 3 ; ind ++)
            {
                for(int ind1 = 0 ; ind1 < 3 ; ind1 ++)
                {
                    this->matrix[ind][ind1] = mat[ind][ind1];
                }
            }
        }
        Matrix operator + (Matrix const &m1)
        {
            Matrix m3;
            for(int ind = 0 ; ind < 3 ; ind ++)
            {
                for(int ind1 = 0 ; ind1 < 3 ; ind1 ++)
                {
                    m3.matrix[ind][ind1] = matrix[ind][ind1] + m1.matrix[ind][ind1];
                }
            }
            return m3;
        }
        void display(){
            cout<<"The added matrix is : \n";
            for(int ind = 0 ; ind < 3 ; ind ++)
            {
                for(int ind1 = 0 ; ind1 < 3 ; ind1 ++)
                {
                    cout<<matrix[ind][ind1]<<" ";
                }
                cout<<"\n";
            }
        }
};


int main(){
    int mat1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Matrix m1,m2,m3;
    m1.setValue(mat1);
    m2.setValue(mat1);
    m3 = m1 + m2;
    m3.display();
}