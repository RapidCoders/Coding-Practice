/*
Q2. Write a program to print given pattern

Input: 5
Output:
*
* *
* * *
* * * *
* * * * *

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print_pattern(int n)
{
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
}

int main(void)
{
    int num;

    cout << "Enter the number: ";
    cin >> num;

    print_pattern(num);

    return 0;
}
