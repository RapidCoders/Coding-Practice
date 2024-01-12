
// Q.2 Program to Check Disarium number
// Input:
//   num = 135  

// Output:
//   1^1 + 3^2 + 5^3 = 135
//   135 is a disarium number

// Author: Suyash



#include<iostream>
#include<cmath>
using namespace std;

int counter(int num)
{
    int count  = 0;
    while(num>0)
    {
        num = num/10;
        count++;
    }
    return count;
}

bool disarium(int num)
{
    int result = counter(num);
    int sum = 0;
    int temp = num;

    while (temp != 0)
    {
        int digit = temp%10;
        int sqr = pow(digit,result);
        sum = sum + sqr;
        temp = temp / 10;
        result--;
        
    }
    if(sum == num){
        return true;
    }
    
    return false;
    
}

int main(){
    int num;
    cout<<"Number :";
    cin>>num;
    if(disarium(num))
    {
        cout<<"True";
    
    }else{
        cout<<"False";
    }
    return 0;
}
