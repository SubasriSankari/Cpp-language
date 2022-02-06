#include<iostream>
#include<fstream>
#include<cstdio>

using namespace std;
int main(){

    char path[] = "FileFindReplace.txt";
    char Temp[] = "Temp.txt";

    ifstream file(path);
    ofstream temp(Temp);

    cout<<"Enter the word to find:\n";
    string findWord;
    cin>>findWord;

    cout<<"Enter the word to Replace it with:\n";
    string replaceWord;
    cin>>replaceWord;

    string strTemp;
    if(file.is_open())
    {
        while(file >> strTemp)
        {
            if(strTemp == findWord)
                strTemp = replaceWord;
            strTemp += "\n";
            temp << strTemp;
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
