#include<iostream>
using namespace std;

void ctof(double celcius)
{
    double unit = 1.8;
    cout<<((celcius*unit) + 32 )<<"F";
}    

int main()
{
    double celcius;
    cout<<"celcius :";
    cin>>celcius;
    ctof(celcius);
    return 0;
}
