// Q.3 Write a program that takes an integer n as input and prints a Number Star Square Pattern.
// Input: n = 4
// Output:
// 1*2*3*4
// 9*10*11*12
// 5*6*7*8
// 13*14*15*16
// Author: Shreyash

#include<iostream>
using namespace std;

void patt(int num){
    int count = 0;
    int count1 = 8;
    for (int i = 0; i < num/2; i++) 
    {
        for (int j = 0; j < num; j++)
        {
            count++;
            if (j!=0)
            {
                cout << "*" << count;
            }
            else
            {
                cout << count;
            }
        }
        cout << endl;
        for (int j = 0; j < num; j++)
        {
            count1++;
            if (j!=0)
            {
                cout << "*" << count1;
            }
            else
            {
                cout << count1;
            }
        }
        cout << endl;
    }
}    
int main(){
    int num;
    cout<<"NUm :";
    cin>>num;
    patt(num);
    return 0;
}

