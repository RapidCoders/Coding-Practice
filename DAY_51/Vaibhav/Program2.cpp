/*
Q.3 Write a program that takes an integer n as input and prints a pattern.

Input: n = 4
Output:
1
4*5*6
2*3
7*8*9*10

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print_pattern(int num)
{
    int i, j, k, count1 = 1, count2 = 3;

    for (i = 1; i <= num/2; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == i)
                cout << count1;
            else  
                cout << count1 <<"*";
            count1++;
        }

        cout << endl;

        for (k = 1; k <= i+2; k++)
        {
            if (k == i+2)
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
