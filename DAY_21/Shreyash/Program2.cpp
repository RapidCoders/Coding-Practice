
// Q.2 Program to check whether number is Krishnamurthy number or not.
// Krishnamurthy number is another special number in Java. A number is said to be Krishnamurthy if the factorial sum of all its digits is equal to that number. Krishnamurthy number is also referred to as a Strong number.

// Example : 
// Number = 145  
// = 1! + 4! + 5!  
// = 1 + ( 4 * 3 * 2 * 1 ) + ( 5 * 4 * 3 * 2 * 1 )  
// = 1 + 24 + 120  
// = 145
 
// Author: Suyash

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
