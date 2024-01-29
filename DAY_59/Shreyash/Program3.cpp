// Q.3 Write a program to check the number is Strontio Number or not.
// Explanation :
// Strontio numbers are those four digits numbers when multiplied by 2 give the same digit at the hundreds and tens place. Remember that the input number must be a four-digit number.

// 1386*2=2772, we observe that at tens and hundreds place digits are the same. Hence, 1386 is a strontio number.
// 1221*2=2442, digits at tens and hundreds place are the same. Hence, 1221 is a strontio number.

// Some other strontio numbers are 1111, 2222, 3333, 4444, 5555, 6666, 7777, 8888, 9999, 1001, 2002, 3003, etc.
// Author: Shreyash
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
