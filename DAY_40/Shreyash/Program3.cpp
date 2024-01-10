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
