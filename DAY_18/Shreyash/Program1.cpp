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
