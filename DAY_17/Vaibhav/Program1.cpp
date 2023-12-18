/*
Q.1 Write a program to which accept number from the user and print fibonacci series up to that number.

Input : 7
Output : 0 1 1 2 3 5 8

Input: -3
Output: 

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print_fib(int n)
{
    int i, temp;
    int first = 0;
    int second = 1;

    if (n <= 0)
        return;
    else if (n == 1)
        cout << first << " ";
    else if (n >= 2)
        cout << first << " " << second << " ";

    for (i = 3; i <= n; i++)
    {
        temp = first + second;
        cout << temp << " ";
        first = second;
        second = temp;
    }
}

int main(void)
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    print_fib(n);

    return 0;
}
