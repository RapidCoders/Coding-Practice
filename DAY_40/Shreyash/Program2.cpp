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
