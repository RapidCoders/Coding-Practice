// Q.3 Write a Program to check whether given input number is Emirp Number or not.
// Explanation:A number is called an emirp number if we get another prime number on reversing the number itself. In other words, an emirp number is a number that is prime forwards or backward. It is also known as twisted prime numbers.

// Input: n = 46
// Output:False

// Input: n = 1201
// Output:True
// Author: Shreyash
  
#include<iostream>
#include<vector>
using namespace std;
#include <iostream>



bool primeornot(int num)
{
    for(int i = 2 ;i<num;i++){
        if(num%i == 0){
            return false;
        }
    }

    return true;
}

void emirpornot(int num)
{
    string str = "";
    while(num>0)
    {
        int mod = num%10;
        str = str+to_string(mod);
        num = num/10;

    }
    bool result = primeornot(stoi(str));
    if(result){
        cout<<"True";
    }else{
        cout<<"False";
    }
    
}


int main()
{
    int num;
    cout<<"n :";
    cin>>num;
    if(primeornot(num)){
        emirpornot(num);
    }else{
        cout<<"False";
    }
    return 0;
}
