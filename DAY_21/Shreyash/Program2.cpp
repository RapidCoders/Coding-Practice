#include<iostream>
using namespace std;

int sum_factor(int num)
{
    int mod = 0;
    int sum = 0;
    int fact = 1;
    while(num > 0)
    {
        fact =1;
        mod = num%10;
        for(int i = 1;i<=mod;i++){
            
            fact = fact * i;
        }
        sum = sum + fact;
        num = num /10;

    }
    return sum; 
       
}

int main(){
    int num;
    cout<<"num :";
    cin>>num;
    int sum = sum_factor(num);
    if(sum == num){
        cout<<"True";
    }else{
        cout<<"False";
    }
    
}
