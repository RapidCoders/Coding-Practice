
// Q.3 write Program to find the LCM of two numbers
// Input:   num1 = 12
//          num2 = 14

// Output: 84

// Input:   num1 = 55
//          num2 = 15

// Output: 165

// Author: Shreyash

#include<iostream>
#include<cmath>
using namespace std;

int lcm(int num1,int num2)
{
    int maxx = max(num1,num2);
    int lcm = 1;
    for(int i = maxx;i<num1*num2;i++){
        if(i%num1 == 0&&i%num2 == 0)
        {
            lcm = i;
            
        }

    }

    return lcm;
    
}

int main()
{
    int num1;
    cout<<"num1 :";
    cin>>num1;
    int num2;
    cout<<"num2 :";
    cin>>num2;
    int result = lcm(num1,num2);
    cout<<"HCF for given Inputs: "<<result; 
    return 0;
}
