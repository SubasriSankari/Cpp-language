#include<iostream>
#include<fstream>

using namespace std;
int main(){
    ofstream file;
    file.open("firstFile.txt");
    if (!file) {
		cout << "File not created!";
	}
	else {
		cout << "File created successfully!";
		file<< "Subasri Venkatesan";
	}
	file.close();
}
