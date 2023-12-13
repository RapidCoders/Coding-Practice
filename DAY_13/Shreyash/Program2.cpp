// Q.2 Program to perform user defined operation such as Addition, Subtraction, Multiplication, Division, suing Switch case.
// Option 1 - Addtion 
// Option 2 - Subtraction
// Option 3 - Multiplication
// Option 4 - Division
// Take user defined input and Option and perform operation
// Author: Suyash

#include<iostream>
using namespace std;

int add(int n1,int n2){
    return n1+n2;
}
int sub(int n1,int n2){
    return n1-n2;
}
int mult(int n1,int n2){
    return n1*n2;
}
int divi(int n1,int n2){
    return n1/n2;
}

int main(){
    int a;
    int b;
    int op;
    cin>>a;
    cin>>b;
    cin>>op;
    switch (op)
    {
    case 1:
    cout<<add(a,b);
        break;
    case 2:
    cout<<sub(a,b);
        break;
    case 3:
    cout<<mult(a,b);
        break;
    case 4:
    cout<<divi(a,b);
        break;
    }
    return 0;
}
