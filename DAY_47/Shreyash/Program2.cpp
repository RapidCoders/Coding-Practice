// Q.2 Write a program to calculate simple interest.
// Input  : P = 1000
//          R = 5
//          T = 5
// Output : 2500

// Author: Suyash

#include<iostream>
using namespace std;

int simpleinterest(int p,int r,int t){
    return p*r*t;
}


int main(){
    int p;
    cout<<"Principal balance :";
    cin>>p;
    int r;
    cout<<"Rate :";
    cin>>r;
    int t;
    cout<<"Time(in years) :";
    cin>>t;
    cout<<"Simple Interest :"<<simpleinterest(p,r,t)<<endl;
    return 0;
}
