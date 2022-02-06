#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

typedef struct{
    string BookID;
    string BookName;
    string StudentName;
    int StudentRegNum;
    int CurrentlyHavingBooks;
    string Dept;
}Student;

const int SIZE = 10;

int main(){
    cout<<"\n~~~~~~~~~~~~~~~~~~~ Welcome to Library Management ~~~~~~~~~~~~~~~~~~~~~\n\n";
    
    string BookID;
    string BookName;
    string StudentName;
    int StudentReg;
    int CurrentlyHavingBooks;
    string Dept;
    

    cout<<"Enter the Register number:\n";
    cin>>StudentReg;
    CurrentlyHavingBooks = 10;
    cout<<"Enter the Student Name:\n";
    cin>>StudentName;
    cout<<"Enter the Student Department:\n";
    cin>>Dept;
    cout<<"Enter the Book ID number:\n";
    cin>>BookID;
    cout<<"Enter the Book Name:\n";
    cin>>BookName;
    Student stud1;
    fstream file1("StudentLibrary.txt" ,ios::out | ios::app );
    file1.write(reinterpret_cast<char*>(&stud1), sizeof(Student));
    file1.close();
    
    fstream file("StudentLibrary.txt", ios::in );
    Student print[SIZE];
    //file.read(reinterpret_cast<char*>(print), SIZE * sizeof(Student));
    //file.close();
    int count = 1;
    //int studRecSize = 0;
    file.read(reinterpret_cast<char*>(print), sizeof(Student));
    file.close();
    for(Student& st:print){
        cout<<count << ".\t"<<st.StudentRegNum<<"\t"<<st.StudentName<<"\t"<<st.Dept<<"\t"<<st.BookID<<"\t"<<st.BookName<<"\t"<<st.CurrentlyHavingBooks<<endl;
        count ++;
    }
    /*for(Student &st:print)
    {
        cout<< count << ".\t"<<st.StudentRegNum<<"\t"<<st.StudentName<<"\t"<<st.Dept<<"\t"<<st.BookID<<"\t"<<st.BookName<<"\t"<<st.CurrentlyHavingBooks<<endl;
        count ++;
        studRecSize++;
    }*/
    
    /*while(1)
    {
    
        cout<<"1.Admin"<<endl;
        cout<<"2.Student"<<endl;
        cout<<"3.Exit\n"<<endl;
        int choice;
        cin>>choice;
        switch (choice)
        {
            case 1:
                obj.Admin();
                break;

            case 2:
                obj.StudentPage();
                break;
        
            default:
                cout<<"Error Invalid key.... press again"<<endl;
        }
    }*/
    return 0;
}