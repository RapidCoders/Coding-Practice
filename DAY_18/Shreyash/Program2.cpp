#include<iostream>
using namespace std;

double areatriangle(double breadth,double height){
    return (breadth*height)/2;
}

int main(){
    double breadth;
    double height;
    cout<<"Breadth :-";
    cin>>breadth;
    cout<<"Height :-";
    cin>>height;
    if(breadth >= 1||height >= 1){
        cout<<"Area of Triangle :"<<areatriangle(breadth,height);
    }else{
        cout<<"Invalid input"<<endl;
    }
    return 0;
}
