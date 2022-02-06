#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

typedef struct{
    int StudentRegNum;
    string StudentName;
    string Dept;
    string BookID;
    string BookName;
    int CurrentlyHavingBooks;
}Student;

const int SIZE = 20;

class Library{ 
    private:
        Student stud;
    public:
        void setData(){
            cout<<"Enter the Register number:\n";
            cin>>stud.StudentRegNum;
            stud.CurrentlyHavingBooks = CheckAlreadyExistUser(stud.StudentRegNum);
            cout<<"Enter the Student Name:\n";
            cin>>stud.StudentName;
            cout<<"Enter the Student Department:\n";
            cin>>stud.Dept;
            cout<<"Enter the Book ID number:\n";
            cin>>stud.BookID;
            cout<<"Enter the Book Name:\n";
            cin>>stud.BookName;
        }

        int CheckAlreadyExistUser(int);

        void Update(){
            fstream file("StudentLibrary.txt" , ios::out | ios::binary | ios::app );
            file.write(reinterpret_cast<char*>(&stud), sizeof(Student));
            file.close();
        }
        void display(){
            cout<<".\t"<<stud.StudentRegNum<<"\t"<<stud.StudentName<<"\t"<<stud.Dept<<"\t"<<stud.BookID<<"\t"<<stud.BookName<<"\t"<<stud.CurrentlyHavingBooks<<endl;       
        }
        int reg(){
            return stud.StudentRegNum;
        }
        string studName(){
            return stud.StudentName;
        }
        string dept(){
            return stud.Dept;
        }
        string bookID(){
            return stud.BookID;
        }
        string bookName(){
            return stud.BookName;
        }
        int booksCount(){
            return stud.CurrentlyHavingBooks;
        }
};

Library data;

class Management:public Library{        
    public:
        void StudentPage();
        void Admin();
        void Issue();
        void Return();
        int CheckAlreadyExistUser(int);
        int CheckBookExistOrNot(int,string);
        void ShowAdminDetails();
};

void Management::StudentPage(){
    cout<<"\n********** Student Page ***********\n\n";
    cout<<"1.To Issue"<<endl;
    cout<<"2.To Return"<<endl;
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1:
            Issue();
            break;

        case 2:
            Return();
            break;
                    
        default:
            cout<<"Error Invalid key entered...\n";
    }
}

void Management::Admin(){
    string userName = "Admin";
    string enteredUserName;
    string userPassword = "Library";
    string enteredUserPassword;
    cout<<"Enter Admin name:\n";
    cin>>enteredUserName;
    cout<<"Enter the Admin Password:\n";
    cin>>enteredUserPassword;

    if(enteredUserName == userName && userPassword == enteredUserPassword)
        ShowAdminDetails();
    else
        cout<<"Error... Wrong user name or password";
}

void Management::Issue(){

    string BookID;
    string BookName;
    string StudentName;
    int StudentReg;
    int CurrentlyHavingBooks;
    string Dept;
    Library obj;
    obj.setData();
    obj.Update();
    cout<<"\nDetails Added Succesfully!!\n"<<endl;
}

int Library::CheckAlreadyExistUser(int regNum){
    fstream file("StudentLibrary.txt", ios::in | ios::binary);
    Student print;
    //file.read(reinterpret_cast<char*>(&print), sizeof(Student));
    //file.close();
    int booksCount = 1;
    int studRecSize = 0;
    while(file.read(reinterpret_cast<char*>(&print), sizeof(Student)))
    {
        if(print.StudentRegNum == regNum){
            booksCount ++;
        }
    }
    /*while(!file.eof() && studRecSize < SIZE)
    {
        if(regNum == print[studRecSize].StudentRegNum)
        {
            booksCount ++;
        }
        studRecSize++;
    }*/
    file.close();
    return booksCount;
}

void Management::Return(){
    string BookID;
    int StudentRegNum;

    cout<<"Enter the Register number:\n";
    cin>>StudentRegNum;
    cout<<"Enter the Book ID number:\n";
    cin>>BookID;

    int booksCount = CheckBookExistOrNot(StudentRegNum, BookID);

    char path[] = "StudentLibrary.txt";
    char Temp[] = "temp.txt";
    fstream file(path, ios::in );
    fstream temp(Temp, ios::out | ios::app );
    fstream returnData("StorageOfReturnedData.txt",ios::out | ios::binary | ios::app);
    Student print;
    //file.read(reinterpret_cast<char*>(&print), sizeof(Student));
    //file.close();
    
    int count ;
    int flag = 0;
    //int studRecSize = 0;
    while(file.read((char*)(&print), sizeof(Student)))
    {
        if(flag)
        {
            print.CurrentlyHavingBooks = count++;
            temp.write(reinterpret_cast<char*>(&print), sizeof(Student));
        }
        if(StudentRegNum == print.StudentRegNum && BookID == print.BookID)
        {
            flag = 1;
            count = print.CurrentlyHavingBooks;
            returnData.write(reinterpret_cast<char*>(&print), sizeof(Student));
        }
        else
        {
            temp.write(reinterpret_cast<char*>(&print), sizeof(Student));
        }
        //studRecSize++;
    }
    /*while(!file.eof() && studRecSize < SIZE)
    {
        if(flag)
        {
            print[studRecSize].CurrentlyHavingBooks = count++;
            temp.write(reinterpret_cast<char*>(&print[studRecSize]), sizeof(Student));
        }
        if(StudentRegNum == print[studRecSize].StudentRegNum && BookID == print[studRecSize].BookID)
        {
            flag = 1;
            count = print[studRecSize].CurrentlyHavingBooks;
            returnData.write(reinterpret_cast<char*>(&print[studRecSize]), sizeof(Student));
        }
        else
        {
            temp.write(reinterpret_cast<char*>(&print[studRecSize]), sizeof(Student));
        }
        studRecSize++;
    }*/
    file.close();
    temp.close();
    returnData.close();
    remove(path);
    rename(Temp , path);
    
    cout<<"\nBook Returned Succesfully!!\n"<<endl;
}

int Management::CheckBookExistOrNot(int reg , string bookID)
{
    fstream file("StudentLibrary.txt", ios::in | ios::binary | ios::app);
    Student print;
    //file.read(reinterpret_cast<char*>(&print), sizeof(Student));
    //file.close();
    int booksCount = 0;
    int studRecSize = 0;
    while(file.read(reinterpret_cast<char*>(&print), sizeof(Student)))
    {
        if(reg == print.StudentRegNum && bookID == print.BookID)
        {
            booksCount = print.CurrentlyHavingBooks;
            return booksCount;
        }
    }
    /*while(!file.eof() && studRecSize < SIZE)
    {
        if(reg == print[studRecSize].StudentRegNum && bookID == print[studRecSize].BookID)
        {
            booksCount = print[studRecSize].CurrentlyHavingBooks;
            return booksCount;
        }
        studRecSize++;
    }*/
    file.close();
    return booksCount;
}

void Management::ShowAdminDetails(){
    fstream file("StudentLibrary.txt", ios::in | ios::binary | ios::app);
    Student print;
    //file.read(reinterpret_cast<char*>(print), SIZE * sizeof(Student));
    //file.close();
    int count = 1;
    //int studRecSize = 0;
    while(file.read(reinterpret_cast<char*>(&print), sizeof(Student)))
    {
        cout<<count<<". ";
        data.display();
        count ++;
    }
    /*for(Student &st:print)
    {
        cout<< count << ".\t"<<st.StudentRegNum<<"\t"<<st.StudentName<<"\t"<<st.Dept<<"\t"<<st.BookID<<"\t"<<st.BookName<<"\t"<<st.CurrentlyHavingBooks<<endl;
        count ++;
        studRecSize++;
    }*/
    file.close();
}

int main(){
    cout<<"\n~~~~~~~~~~~~~~~~~~~ Welcome to Library Management ~~~~~~~~~~~~~~~~~~~~~\n\n";
    while(1)
    {
        Management obj;
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
        
            case 3:
                cout<<"\nThank you:)\n\n";
                exit(0);

            default:
                cout<<"Error Invalid key.... press again"<<endl;
        }
    }
    return 0;
}