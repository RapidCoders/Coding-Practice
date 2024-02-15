/*
Q.3 Write a Program to print given pattern.

Input : 5
Output :
 1 2 3 4 5 6 7 8 9
   1           7
     1       5
       1   3
         1
       1   3
     1       5
   1           7
 1 2 3 4 5 6 7 8 9

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;

void print_pattern(int num)
{
    int i, j, count;

    for (i = 1; i <= num; i++)
    {
        count = 1;

        for (j = 1; j < num * 2; j++)
        {
            if (i == 1)
                cout << count << ' ';
            else if (j == i)
            {
                count = 1;
                cout << count << ' ';
            }
            else if (j == ((num * 2) - i))
                cout << count << ' ';
            else
                cout << "  ";
            count++;
        }
        cout << '\n';
    }

    for (i = num - 1; i >= 1; i--)
    {
        count = 1;

        for (j = 1; j < num * 2; j++)
        {
            if (i == 1)
                cout << count << ' ';
            else if (j == i)
            {
                count = 1;
                cout << count << ' ';
            }
            else if (j == ((num * 2) - i))
                cout << count << ' ';
            else
                cout << "  ";
            count++;
        }
        cout << '\n';
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
