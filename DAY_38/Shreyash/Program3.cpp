
// Q.3 write Program for Octal to Decimal Conversion.
// Input: octal = 462
// Output:  306

// Input: octal = 206
// Output: 134

// Author: Shreyash

#include<iostream>
#include<cmath>
using namespace std;

int octaltodecimal(int num)
{
    int mod;
    int sum = 0;
    int power = 0;
    while(num > 0)
    {
        mod = num%10;
        int sqr;
        sqr = pow(8,power);
        sum = sum + (sqr * mod);
        num = num/10;
        power++;
    }
    return sum;
    
}

int main()
{
    int num;
    cout<<"Octal :";
    cin>>num;
    int result = octaltodecimal(num);
    cout<<"Decimal : "<<result; 
    return 0;
}
