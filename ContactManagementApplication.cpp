#include<iostream>
#include<fstream>
#include<ctime>
#include<conio.h>
using namespace std;

class CallHistory{
    public:
        long long int mobile_number;
        string name;
        char* fromTime;
        char* toTime;
        char* setTime(){
            time_t now = time(0);
            return (ctime(&now));
        }
        long long int getNumber(){
            return mobile_number;
        }
        string getUserName(){
            return name;
        }
        char* getFromTime(){
            return fromTime;
        }
        char* getToTime(){
            return toTime;
        }
};

class Mobile{
    private:
        long long int mobile_number;
        string name;
        
    public:
        bool CheckMobileNumberIsAlreadyExist(long long int);
        bool CheckNameIsAlreadyExist(string);
        void Call_Log();
        void Contacts();
        void AddToContact();
        void ToCall();
        void Search_Contact();
        bool CheckMobileIsValid(long long int);
        void OptionsToEdit();
        void Edit(long long int);
        void Delete(long long int);
        void getDetailToCall(long long int);

        void Create_Contact(){
            cout<<"\n\nEnter Mobile Number:\n";
            cin>>mobile_number;
            bool result = CheckMobileIsValid(mobile_number);
            if(result)
            {
                cout<<"\nInvalid.... Please enter valid phone number!!!\n\n";
                return;
            }
            bool result1 = CheckMobileNumberIsAlreadyExist(mobile_number);
            if(result1)
            {
                cout<<"Sorry... This Mobile Number is already exist!!\n";
                return ;
            }
            cout<<"\nEnter First Name:\n";
            cin>>name;
            bool result2 = CheckNameIsAlreadyExist(name);
            if(result2)
            {
                cout<<"Sorry... This Name is already exist!!\n";
                return ;
            }
            //cout<<mobile_number<<name;
            //cout<<getMobileNumber()<<getName();
        }

        long long int getMobileNumber(){
            return mobile_number;
        }

        string getName(){
            return name;
        }

};

fstream file;
Mobile contact;
CallHistory hist;

void Mobile::Call_Log(){
    cout<<"\tContact User Name"<<"\t|\t"<<"Contact Number"<<"\t|\t"<<"From"<<"\t|\t"<<"To Time\n"<<endl;
    //if(!is_empty(file))
    file.open("CallLog.dat", ios::in);
    CallHistory call;
    while(file.read((char*)&call,sizeof(CallHistory)))
    {
        cout<<" "<< call.getUserName() <<" "<< call.getNumber() <<" "<< call.getFromTime() <<" "<< call.getToTime() <<endl;
    }
    file.close();
}

bool Mobile::CheckMobileIsValid(long long int number)
{
    long long copy = number;
	int count = 1;
	while(copy > 9){
		copy /= 10;
		count ++;
	}
	if(count != 10 || (copy != 7 && copy != 8 && copy != 9) )
	{
		return true;
	}
	return false;
}
void Mobile::getDetailToCall(long long int num){
    file.open("CallLog.dat", ios::out | ios::app); 
    cout<<"Enter the name:\n";
    string name;
    cin>>name;
    string str;
    hist.mobile_number = num;
    hist.name = name;
    hist.fromTime = hist.setTime();
    cout<<"\nSpeaking..";

    getch();        

    cout<<"Disconnected..\n";
    hist.toTime = hist.setTime();
   
    file.write((char*)&hist,sizeof(CallHistory));
    file.close();
}

void Mobile::ToCall(){
    cout<<"Enter the mobile number to call:\n";
    long long int num;
    cin>>num;
    bool result = contact.CheckMobileIsValid(num);
    if(!result)
    {
        getDetailToCall(num);
    }      
}

void Mobile::Contacts(){
    file.open("Contact.dat", ios::in );
    cout<<"\tContact User Name"<<"\t|\t"<<"Contact Number\n"<<endl;
    //if(!is_empty(file))
    {
        while(file.read((char*)&contact,sizeof(Mobile)))
        {
            cout<<"\t"<< contact.getName()<<"\t|\t"<<contact.getMobileNumber()<<endl<<endl;
        }
    }
    file.close();
}

void Mobile::AddToContact(){
    contact.Create_Contact();
    file.open("Contact.dat", ios::out | ios::app);
    //contact.Create_Contact();
    file.write((char*)&contact,sizeof(Mobile));
    file.close();
    cout<<endl<<"Contact Added Successfully...\n"<<endl;
}

bool Mobile::CheckMobileNumberIsAlreadyExist(long long int num){
    file.open("Contact.dat", ios::in );
    int found = 0;
    Mobile cont;
    while(file.read((char*)&cont,sizeof(Mobile)))
    {
        //cout<<contact.getMobileNumber()<<endl;
        if(cont.getMobileNumber() == num)
        {
            found = 1;
            break;
        }
    }
    file.close();
    if(found)
        return true;
    return false;
}

void Mobile::Edit(long long int num){
    
    file.open("Contact.dat", ios::in | ios::out);
    fstream temp;
    temp.open("Temp.dat", ios::out);
    while(file.read((char*)&contact,sizeof(Mobile)))
    {
        if(contact.getMobileNumber() == num)
        {
            cout<<"\nEnter the edit number:\n";
            cin>>contact.mobile_number;
            cout<<"\nEnter the edit name:\n";
            cin>>contact.name;
        }
        temp.write((char*)&contact,sizeof(Mobile));
    }
    temp.close();
    file.close();
    cout<<"Done..\n"<<endl;
    remove("Contact.dat");
    rename("Temp.dat", "Contact.txt");
}

void Mobile::Delete(long long int num){
    file.open("Contact.dat", ios::in | ios::out);
    fstream temp;
    temp.open("Temp.dat", ios::out);
    while(file.read((char*)&contact,sizeof(Mobile)))
    {
        if(contact.getMobileNumber() != num)
        {
            temp.write((char*)&contact,sizeof(Mobile));
        }
    }
    temp.close();
    file.close();
    cout<<"\nContact deleted permanently..\n"<<endl;
    remove("Contact.dat");
    rename("Temp.dat", "Contact.dat");
}

void Mobile::OptionsToEdit(){
    cout<<"1. Edit\n";
    cout<<"2. Delete\n";
    cout<<"3. Exit\n\n--->";
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1:
            Edit(contact.getMobileNumber());
            break;
        case 2:
            Delete(contact.getMobileNumber());
            break;
        case 3:
            cout<<"Step Back..\n";
            break;
        default:
            cout<<"Error... Invalid key\n\n";
    }
}

bool Mobile::CheckNameIsAlreadyExist(string name){
    file.open("Contact.dat", ios::in );
    int found = 0;
    Mobile cont;
    while(file.read((char*)&cont,sizeof(Mobile)))
    {
        if(cont.getName() == name)
        {
            found = 1;
            break;
        }
    }
    file.close();
    if(found)
        return true;
    return false;
}

void Mobile::Search_Contact(){
    long long int num;
    cout<<"Enter the number:\n";
    cin>>num;
    file.open("Contact.dat", ios::in );
    int found = 0;
    while(file.read((char*)&contact,sizeof(Mobile)))
    {
        if(contact.getMobileNumber() == num)
        {
            found = 1;
            break;
        }
    }
    file.close();

    if(found){
        cout<<"\n"<<contact.getName()<<"\n"<<contact.getMobileNumber()<<endl<<endl;
        OptionsToEdit();
    }
    else{
        cout<<"\nNo Contact found\n"<<endl;
    }    
}

int main(){
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~ Contact Management Application ~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    while(1)
    {
        cout<<"\n\nEnter Your Choice:\n\n";
        cout<<"1. Call Log\n";
        cout<<"2. Contacts\n";
        cout<<"3. To Call\n";
        cout<<"4. Create Contact\n";
        cout<<"5. Search Contact\n";
        cout<<"6. Back\n\n--->";
        int choice;
        cin>>choice;
        switch(choice)
        {
            case 1:
                contact.Call_Log();
                break;
            case 2:
                contact.Contacts();
                break;
            case 3:
                contact.ToCall();
                break;
            case 4:
                contact.AddToContact();
                break;
            case 5:
                contact.Search_Contact();
                break;
            case 6:
                cout<<"\nBacked..\n\n";
                exit(0);
            default:
                cout<<"Wrong Key:(\n... Please Try again...\n";
        }
    }
    return 0;
}