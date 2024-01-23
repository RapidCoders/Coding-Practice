/*
Q.1 Write a function that takes a character as input and prints a below pattern.

Input: 4

Output:
      4
    4 3
  4 3 2
4 3 2 1

Author: Vaibhav
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void print_pattern(int n)
{
    int i, j, k;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            cout << "  ";

        for (k = n; k >= j; k--)
            cout << k << " ";
        cout << endl;
    }
}

int main(void)
{
    int n;

    cout << "\nEnter the number: ";
    cin >> n;

    print_pattern(n);

    return 0;
}
