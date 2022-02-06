#include<iostream>
#include<fstream>

using namespace std;
int main(){
    char path[] = "FileFindReplace.txt";
    char Temp[] = "Temp.txt";

    ifstream file(path);
    ofstream temp(Temp);

    cout<<"Enter the line to delete from file:\n";
    string deleteLine;
    cin>>deleteLine;

    string strTemp;
    if(file.is_open())
    {
        while(getline(file , strTemp))
        {
            if(strTemp != deleteLine)
                temp << strTemp<<endl;
        }
        cout<<"File Changed Successfully"<<endl;
    }
    
    else
    {
        cout<<"File Not Created";
    }
    file.close();
    temp.close();
    remove(path);
    if(rename(Temp, path) != 0){
        cout<<"Error";
    }
}
