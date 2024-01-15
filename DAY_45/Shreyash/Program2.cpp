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
