#include <iostream>
#include<conio.h>
using namespace std;

bool isPowerOfTwo(int x)
{
    // x will check if x == 0 and !(x & (x - 1)) will check if x is a power of 2 or not
    return (x && !(x & (x - 1)));
}
int main()
{
    int x;
    cout<<"enter a number in binary"<<endl;
    cin>> x;
    if(isPowerOfTwo(x) == false)
    {
        cout<<"Power 0f two"<<endl;
    }
    else
    {
        cout<<"Not power of two";
    }
}
