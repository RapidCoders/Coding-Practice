// Q.2 Program to check whether number is pronic or not.
// A number is said to be pronic number if it is a product of two consecutive numbers.

// For examples:
// 6 = 2 x 3
// 72 = 8 x 9

// Input : 6
// Output : It is a pronic number

// Input : 7
// Output : It is not a pronic number
// Author: Suyash

#include<iostream>
using namespace std;

int num_checker(int num)
{
    int flag = 0;
    for(int i = 1;i<=num/i;i++)
    {
    	
        if(num%i == 0){
            if(i*(i+1)==num)
            {
                flag++;
            }
        }
    }
    return flag;    
}

int main(){
    int num;
    cout<<"num :";
    cin>>num;
    int flag = num_checker(num);
    if(flag == 0)
    {
        cout<<"False";
    }
    else
    {
        cout<<"True";
    }
}
