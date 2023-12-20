#include<iostream>
using namespace std;

int har_checker(int num){
    int sum = 0;
    int mod;
    while(num > 0){
        mod = num % 10;
        sum = sum + mod;
        num = num / 10;
    }
    return sum;
}

int main(){
    int num;
    cout<<"num :";
    cin>>num;
    int sum1 = har_checker(num);
    if(num%sum1 == 0){
        cout<<"Harshad Number.";
    }else{
        cout<<"Not Harshad Number.";
    }
}
