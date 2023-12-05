/*
Q2. Write a program which accept one number from user and print that number of even numbers on screen.

Input : 7
Output: 2 4 6 8 10 12 14

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print_n_even_nums(int n)
{
    int i, j = 2;

    cout << "\nEven numbers are: ";
    for (i = 1; i <= n; j++)
    {
        if (j % 2 == 0)
        {
            cout << j << " ";
            i++;
        }
    }
}

int main(void)
{
    int num;

    cout << "\nEnter the number that you want to print even numbers: ";
    cin >> num;

    print_n_even_nums(num);

    return 0;
}
