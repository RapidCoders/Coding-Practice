/*
Q.3 write a program Print Right Diamond Number Pattern.

Input : First term =  3
Output :

3
4 4
5 5 5
6 6 6 6
6 6 6 6
5 5 5
4 4
3

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;

void print_pattern(int num)
{
    int i, j, temp = num * 2;

    for (i = num; i <= temp; i++)
    {
        for (j = num; j <= i; j++)
            cout << i << ' ';
        cout << '\n';
    }

    for (i = temp; i >= num; i--)
    {
        for (j = num; j <= i; j++)
            cout << i << ' ';
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
