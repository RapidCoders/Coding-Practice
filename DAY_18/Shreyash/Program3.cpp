// Q.3 Write a program which accept number from user and state whether it is perfect number or not.
// Input : num = 14
// Output : False
// Input : num = 6
// Output : True
// Author: Shreyash

#include<iostream>
using namespace std;

int perfectt(int num){
    int sum = 0;
    for(int i = 1;i<num;i++){
        if(num%i == 0){
            sum = sum + i;    
        }
    }
    return sum;
}

int main(){
    int num;
    cin>>num;
    int flag;
    if(num >= 1){
        flag = perfectt(num);
    }else{
        cout<<"Invalid input"<<endl;
    }
    if (flag == num){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}
