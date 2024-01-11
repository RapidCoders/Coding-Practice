
// Q.2 Program to Convert Celsius into Fahrenheit.
// Input  : 40
// Output : 104F

// Input  : 10
// Output : 50F
// Author: Suyash

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
