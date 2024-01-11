/*
Q.3 write program to Print Number Star Right Triangle Pattern.

Input: n = 4
Output:

         1
         3*2
         6*5*4
         10*9*8*7

Input: n = 5
Output:
         1
         3*2
         6*5*4
         10*9*8*7
         15*14*13*12*11

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print_pattern(int num)
{
    int i, j, temp, print = 0;

    for (i = 1; i <= num; i++)
    {
        print += i;
        temp = print;
        for (j = 1; j <= i; j++)
        {
            if (i == j)
                cout << temp-- << " ";
            else
                cout << temp-- << "*";
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
