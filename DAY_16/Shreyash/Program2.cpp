
// Q.2 Write a program to print given pattern.

// Input : 5
// Output :
// A
// B B
// C C C
// D D D D 
// E E E E E

// Author: Suyash

#include <iostream>
using namespace std;

void patt(int num){
    char ch = 'A';
    for (int i = 1; i <= num; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << ch << " ";
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
