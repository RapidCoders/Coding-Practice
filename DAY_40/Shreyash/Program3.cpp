
// Q.3 write Program to swap two numbers without using a third variable.
// Input:
//       a = 10
//       b = 12
// Output:
//       a = 12
//       b = 10

// Input:
//       a = 55
//       b = 20
// Output:
//       a = 20
//       b = 55
// Author: Shreyash

#include<iostream>
#include<cmath>
using namespace std;

void swapArthmetic(int a,int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"a :"<<a<<endl<<"b :"<<b;

}

void swapBitwise(int a,int b)
{
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<"a :"<<a<<endl<<"b :"<<b;

}


int main()
{
    int a , b;
    cout<<"a :";
    cin>>a;
    cout<<"b :";
    cin>>b;
    swapArthmetic(a,b);
    return 0;
}
