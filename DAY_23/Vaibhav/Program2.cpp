/*
Q.2 Write program which to print the below pattern.

Input: 8
Output:
        1           1
          2       2
            3   3
              4
            3   3
          2       2
        1           1

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print_pattern(int num)
{
    int i, j;

    cout << endl;
    for (i = 1; i <= (num / 2); i++)
    {
        for (j = 1; j < num; j++)
        {
            if (i == j || (i + j) == num)
                cout << i << "  ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    for (i = (num / 2) - 1; i >= 1; i--)
    {
        for (j = num - 1; j >= 1; j--)
        {
            if (i == j || (i + j) == num)
                cout << i << "  ";
            else
                cout << "  ";
        }
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