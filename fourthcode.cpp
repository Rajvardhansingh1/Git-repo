#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;
    string str2;
    str1 = " Raj ";
    str2 = "is funny";
    cout<<" The strings are :"<<str1<<endl;
    cout<<"second string is " <<str2<<endl;
    //cout<<"Combined string is : "<<str1 + " "+ str2;
    string combined;
    combined = str1.append(str2);
    cout<<combined<<endl;
    cout<<"Enter both the strings : "<<endl;
    /*cin>>str1;
    cout<<str1[0];*/
    getline(cin,str2);
}