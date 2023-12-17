/*
Q.2 Write a program to print given pattern.

Input : 5
Output :
A
A B
A B C
A B C D
A B C D E

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
