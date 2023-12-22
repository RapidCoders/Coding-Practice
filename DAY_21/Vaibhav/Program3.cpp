/*
Q.3 Write a program to print given pattern.

Input : num = 7

      *
    * * *
  * * * * *
* * * * * * *
  * * * * *
    * * *
      *

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// void print_pattern(int num)
// {
//     int i, j;

//     for (i = 1; i <= num; i++)
//     {
//         for (j = num; j >= 1; j--)
//         {
//             if (i >= j)
//                 cout << "* ";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
// }

void print_pattern(int num)
{
    int i, j, k, tmp = 1;

    if (num % 2 == 0)
        return;

    cout << endl;
    for (i = 2; i <= ((num / 2) + 1); i++, tmp += 2)
    {
        for (j = 1; j <= (num - i); j++)
            cout << "  ";
        for (k = 1; k <= tmp; k++)
            cout << "* ";
        cout << endl;
    }

    for (i = ((num / 2) + 2); i >= 1 ; i--, tmp -= 2)
    {
        for (j = 1; j <= (num - i); j++)
            cout << "  ";
        for (k = 1; k <= tmp; k++)
            cout << "* ";
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