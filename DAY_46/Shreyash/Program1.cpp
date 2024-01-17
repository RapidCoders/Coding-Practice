#include<iostream>
using namespace std;
#include<cmath>

bool powoffour(int num)
{
    for(int i =1;i<=num/2;i++){
        int result = pow(4,i);
        if(result == num){
            return true;
        }
    }

    return false;
}
int main(){
    int num;
    cout<<"Num :";
    cin>>num;
    bool result = powoffour(num);
    if(result){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}
