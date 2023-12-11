// # Q3. Write a program which accept two numbers and give their relationship.
// ~~~
// Input: 5 -5
// Output: 5 is greater than -5


// Input: 6 6.5
// Output: 6.5 is greater than 6

// Input: 42 42
// Output: Numbers are same
// ~~~
// **Author: Shreyash**

// Code

#include<iostream>
using namespace std;

void relationShip(double num1,double num2)
{
    if(num1==num2){
        cout<<"Numbers are same";
    }
    else if(num1>num2){
        cout<<num1<<" is greater than "<<num2;
    }
    else if(num1<num2){
        cout<<num2<<" is greater than "<<num2;
    }
    else{
        cout<<"invalid input";
    }
    
}

int main()
{

    double num1;
    double num2;
    cout<<"Enter First Number :";
    cin>>num1;
    cout<<"Enter Second Number :";
    cin>>num2;
    relationShip(num1,num2);
    
    return 0;
}
