/*
Q.3 Write a program that takes an integer n as input and prints a Number Star Square Pattern.

Input: n = 4
Output:
1*2*3*4
9*10*11*12
5*6*7*8
13*14*15*16

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print_pattern(int num)
{
    int i, j, k, count1 = 1, count2 = (num * 2) + 1;

    for (i = 1; i <= num / 2; i++)
    {
        for (j = 1; j <= num; j++)
        {
            if (j == num)
                cout << count1;
            else
                cout << count1 << "*";
            count1++;
        }
        cout << endl;

        for (k = 1; k <= num; k++)
        {
            if (k == num)
                cout << count2;
            else
                cout << count2 << "*";
            count2++;
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
