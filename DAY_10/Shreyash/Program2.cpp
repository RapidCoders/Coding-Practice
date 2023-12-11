
// Q.2 Program to display all prime numbers from 1 to n
// Input: n = 11

// Output: 2 3 5 7 11
// Author: Suyash


#include<iostream>
using namespace std;

void factors(int num)
{
    if(num<=2){
        cout<<"Enter Number greater than 2";
    }
    else{
        cout<<2;
        for(int i = 2;i<=num;i++)
    {
        if(i%2 == 1){
            cout<<i;
        }
        else{
            cout<<" ";
        }
    }
    }
}

int main()
{
    int num;
    cout<<"Enter Number :";
    cin>>num;
    factors(num);
    return 0;

}
