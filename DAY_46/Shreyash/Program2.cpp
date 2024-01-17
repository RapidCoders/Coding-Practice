
// Q.2 Write a program to find the area and perimeter of the semicircle.
// Input  : 10
// Output : Area : 157
//          Perimeter : 51.4
// Author: Suyash


#include<iostream>
using namespace std;

double area(int r){
    return 0.5*3.14*(r*r);
}

double perimeter(int r){
    return (3.14*r)+2*r;
}

int main(){
    int r;
    cout<<"Radius :";
    cin>>r;
    cout<<"area of semicircle :"<<area(r)<<endl;
    cout<<"perimeter of semicircle :"<<perimeter(r);
    return 0;
}
