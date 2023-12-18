
// Q.3 Write a program to print given pattern.

// Input : 5
// Output :
/*
A       A 

B B     B 

C   C   C 

D     D D 

E       E 

*/

// Author: Suyash

#include <iostream>
using namespace std;

void patt(int num){
    char ch = 'A';
    for (int i = 1; i <= num; ++i) {
        for (int j = 1; j <= num; ++j) {
            if(i==j||j==1||j==num){
                cout<<ch<<" ";
            }else{
                cout<<"  ";
            }
        }
            ++ch;
        cout <<endl;
    }
}

int main() {
    int num;
    cin>>num;
    patt(num);
    return 0;
}
