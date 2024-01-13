#include<iostream>
using namespace std;

void QuoandRemin(int num1,int num2){
    int Quo = num1/num2;
    int remin = num1%num2;
    cout<<"Quotient :"<<Quo<<endl;
    cout<<"Remainder :"<<remin;
}

int main(){
    int num1;
    cout<<"Num :";
    cin>>num1;
    int num2;
    cout<<"Num2 :";
    cin>>num2;
    QuoandRemin(num1,num2);
    return 0;
}
