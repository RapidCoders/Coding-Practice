/*
Q.2 Write a program to print given pattern.

Input : 5
Output :
A
B B
C C C
D D D D 
E E E E E

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void display_pattern(int n)
{
    char c = 'A';
    int i, j;

    cout << endl;
    for (i = 1; i <= n; i++, c++)
    {
        for (j = 1; j <= i; j++)
            cout << c << " ";
        cout << endl;
    }
}   

int main(void)
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    display_pattern(n);

    return 0;
}
