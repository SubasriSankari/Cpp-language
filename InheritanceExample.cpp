#include<iostream>
using namespace std;

class Student{
    protected:
        int reg_no = 4124106;  
};

class CollegeBus{
    protected:
        int busFees = 2000;
};

class TuitionFee{
    protected:
        int tuitionFee = 0;
};

class Canteen{
    protected:
        int foodFee = 0;
};

class PaidOrNot: public Student, public Canteen, public TuitionFee, public CollegeBus{
    public:
        int status = 0;
        void getRegisterNumber()
        {
            cout<<"\nYour Register number is : "<<reg_no<<endl;
        }
        int checkTuitionFeePaid(){
            if(tuitionFee)
            {
                cout<<"Tuition Fee pending Amount is "<<tuitionFee<<endl;
                status = 1;
                return 0;
            }
            return 1;
        }
        int checkCollegeBusFee(){
            if(busFees)
            {
                cout<<"Bus Fee pending Amount is "<<busFees<<endl;
                status = 1;
                return 0;
            }
            return 1;
        }
        int FoodFee(){
            if(foodFee)
            {
                cout<<"Food Fee payment pending is "<<foodFee<<endl;
                status = 1;
                return 0;
            }
            return 1;
        }
        void UpdateFee(){
            cout<<"\n1. Tuition Fee"<<endl;
            cout<<"2. College Bus Fee"<<endl;
            cout<<"3. Food Fee"<<endl<<"--->";

            int choice;
            cin>>choice;
            
            cout<<"\n";
            int fee;
            status = 0;
            switch(choice)
            {
                case 1:
                    cout<<"Please enter the fee amount: ";
                    cin>>fee;
                    tuitionFee -= fee;
                    cout<<"Fees Paid Successfully\n"<<endl;
                    break;
                case 2:
                    cout<<"Please enter the fee amount: ";
                    cin>>fee;
                    busFees -= fee;
                    cout<<"Fees Paid Successfully\n"<<endl;
                    break;
                case 3:
                    cout<<"Please enter the fee amount: ";
                    cin>>fee;
                    foodFee -= fee;
                    cout<<"Fees Paid Successfully\n"<<endl;
                    break;
                default:
                    cout<<"Entered wrong key:(\n"<<endl;
                    exit(-1);
            }
        }
};

int main(){

    PaidOrNot obj;
    obj.getRegisterNumber();
    
    while(1)
    {
        int choice;
        
        if(obj.checkTuitionFeePaid())
        {
            cout<<"Tuition fee Paid Successfully"<<endl;
        }
        if(obj.checkCollegeBusFee())
        {
            cout<<"College fee Paid Successfully"<<endl;
        }
        if(obj.FoodFee())
        {
            cout<<"Food fee Paid Successfully\n"<<endl;
        }
        if(obj.status)
        {
            cout<<"Sorry!! You cannot leave from the campus!! Your Payment is in pending.. \n"<<endl;
        }
        else
        {
            cout<<"You can leave from the campus... Happy journey:)\n"<<endl;
            return 0;
        }

        cout<<"1. To Pay Fee"<<endl;
        cout<<"2. Not now"<<endl<<"--->";
        cin>>choice;

        switch(choice)
        {
            case 1:
                obj.UpdateFee();
                break;
            case 2:
                exit(0);
            default:
                cout<<"Entered wrong key:(\n"<<endl;
                exit(-1);
        }
    }
}