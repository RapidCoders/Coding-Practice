
// Q.3 Write a program to print given pattern.

// Input : 5
// Output :
// A
// AB
// ABC
// ABCD
// ABCDE

// Author: Suyash
    
#include <iostream>
using namespace std;
void alpha_patt(int num){
    for(int i = 1;i<=num;i++){
        for(int j = 1;j<=i;j++){
            cout<<(char)(j+64);
    
        }
        cout<<endl;
    }
    
    
}

int main() {
    int num;
    cout<<"Enter Number :";
    cin>>num;
    alpha_patt(num);
    return 0;
}
