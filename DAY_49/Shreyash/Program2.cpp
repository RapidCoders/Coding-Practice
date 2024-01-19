// Q.2 Write a program to find 3rd largest element in an array.
// Input  : [1,2,5,6,3,2]
// Output : 3rd largest element is : 3

// Input  : [44,66,99,77,33,22,55]
// Output : 3rd largest element is : 66
// Author: Suyash

#include<iostream>
using namespace std;

double usdtoinr(int usd){
    return usd*83.11;
}


int main(){
    int usd;
    cout<<"USD :";
    cin>>usd;
    cout<<"INR :"<<usdtoinr(usd)<<endl;
    return 0;
}
