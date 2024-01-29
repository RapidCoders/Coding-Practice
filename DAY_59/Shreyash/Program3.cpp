#include<iostream>
using namespace std;

bool strontio_or_not(int num)
{
    if((num>999)&&(num<10000)){
        num = num * 2;
        num = num / 10;
        num = num % 100;
        if(num/10 == num%10){
            return true;
        }
        else{  
            return false;
        }
    }
    else{   
        cout<<"Enter Number Greater than 999";
    }
    return false;
}
  
int main()
{
    long int num;
    cin>>num;
    if(strontio_or_not(num))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}
