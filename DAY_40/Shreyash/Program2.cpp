
// Q.2 Program to Convert meter to Feet and Inches.
// Input  : 40
// Output : The value of 40 meter in Inches is:  1574.80
//          The value of 40 meter in feet is: 131.24

// Input  : 10
// Output : The value of 10 meter in Inches is: 393.7
//          The value of 10 meter in Feet is: 32.81
// Author: Suyash

#include<iostream>
using namespace std;

void mtof(double meters)
{
    double feet = 3.28;
    cout<<meters*feet;
}

void mtoi(double meters)
{
    double inch = 39.37;
    cout<<inch*meters;

}
    


int main()
{
    double meters;
    cout<<"meters :";
    cin>>meters;
    cout<<"The value of 10 meter in Inches is: ";
    mtoi(meters);
    cout<<endl;
    cout<<"The value of 10 meter in feet is: ";
    mtof(meters);
    return 0;
}
