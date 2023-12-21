
// Q.3 Write a Program which accept number and check whether it is Automorphic Number or Not.
// Input : num = 5
// Output : True
// Explaination: 5^2 = 25
// Square ends in the same digit as the number itself.

// Input : num = 7
// Output : False
// Author: Shreyash

#include<iostream>
using namespace std;

bool num_checker(int num)
{
    int num1 = 1;
    for(int i = 1;i<=num;i++)
    {
        num1 = num * i;
    }
    while(num1 != 0||num != 0){
        if(num == 0){
            break;
        }

        if(num1 %10 != num%10){
            return false;
        }
        num1 = num1/10;
        num = num/10;
	}
	return true;
}

int main(){
    int num;
    cout<<"num :";
    cin>>num;
    int flag = num_checker(num);
    if(num > 0)
    {
        if(flag == true){
            cout<<"True";
        }else{
            cout<<"False";
        }
    }
}
