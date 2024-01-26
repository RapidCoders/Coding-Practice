/*
Q.3 Write a program to print given Pattern.

Input: num = 4
Output:
*  *  *  *  *  *  *
   *           *
      *     *
         *

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print_pattern(int num)
{
    int i, j, k;

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num; j++)
        {
            if ((i == 1) || (j == i))
                cout << "*  ";
            else
                cout << "   ";
        }

        for (k = num - 1; k >= 1; k--)
        {
            if ((i == 1) || (k == i))
                cout << "*  ";
            else
                cout << "   ";
        }
        cout << endl;
    }
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    print_pattern(num);

    return 0;
}
