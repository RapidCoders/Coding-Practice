/*
Q.1 Write a function that takes a character as input and prints a below pattern.

Input: A, 5
Output:
    A
   A A
  A A A
 A A A A
A A A A A

Author: Vaibhav
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void print_pattern(char c, int n)
{
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= 1; j--)
        {
            if (j <= i)
                cout << c << " ";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main(void)
{
    int n;
    char c;

    cout << "\nEnter the character: ";
    cin >> c;

    cout << "\nEnter the number: ";
    cin >> n;

    print_pattern(c, n);

    return 0;
}
