#include<iostream>
#include<fstream>

using namespace std;
int main(){
    int count = 1;
    fstream file("FileAppend.txt" , std::ios_base::app);
    //file.open("FileAppend.txt");
    if(file.is_open()) 
    {
		cout<<"File created successfully!";
		file<<"Subasri Venkatesan" << count;
	}
    file.close();
}
