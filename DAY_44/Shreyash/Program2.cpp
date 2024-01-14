#include<iostream>
using namespace std;

int areaofTrapezium(int a,int b,int h){
    float area = 0.5*(a + b)*h;
    return area;
}

int main(){
    int num1;
    cout<<"a :";
    cin>>num1;
    int num2;
    cout<<"b :";
    cin>>num2;
    int num3;
    cout<<"h :";
    cin>>num3;
    float area = areaofTrapezium(num1,num2,num3);
    cout<<"Area of Trapezium :"<<area;
    return 0;
}
