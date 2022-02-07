#include <iostream>
#include <algorithm>
using namespace std;

void reverse(string &str, int index)
{
    static int start = 0;
 
    if (index == str.length()) 
        return;
 
    reverse(str, index + 1);
 
    if (start <= index) 
        swap(str[start++], str[index]);
}
 
int main()
{
    cout<<"\n ****** String Reverse ******\n\n";
    cout<<"Enter the String to reverse:\n";
    string str;
    getline( cin , str );
    //string str = "Techie Delight";
 
    reverse(str, 0);
    cout << "Reverse of the given string is \"" << str<<"\".\n";
 
    return 0;
}