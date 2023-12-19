// Q.1 Write a program to which accept radius(cm) of circle from the user and give circumference of circle.
// Input : 5.5
// Output : 34.54

// Input: -3
// Output: Invalid input.
// Author: Vaibhav



#include<iostream>
using namespace std;

double circumference(double num){
    double pii = 3.14;
    return 2*pii*num;
}

int main(){
    double num;
    cin>>num;
    int flag;
    if(num >= 1){
        cout<<circumference(num);
    }else{
        cout<<"Invalid input"<<endl;
    }
    return 0;
}
