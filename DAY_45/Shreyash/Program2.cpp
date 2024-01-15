

// Q.2 Write a program to convert hours into minutes and seconds.
// Input  : Enter number of Hours : 2
// Output : Number of Minutes : 120
//          Number of Seconds : 7200
// Author: Suyash


#include<iostream>
using namespace std;

int htom(int h){
    return h*60;
}

int htoms(int h){
    return h*3600;
}

int main(){
    int h;
    cout<<"Hours :";
    cin>>h;
    cout<<"Number of Minutes :"<<htom(h)<<endl;
    cout<<"Number of Seconds :"<<htoms(h);
    return 0;
}
