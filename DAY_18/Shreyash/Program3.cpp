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
