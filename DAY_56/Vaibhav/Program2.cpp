/*
Q.2 Write a program to print given Pattern.

Input: num = 4
Output:
7*8*9*10
4*5*6
2*3
1

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int get_counter(int num)
{
    int sum = 0;

    while (num)
    {
        sum += num;
        num--;
    }
    return sum;
}

void print_pattern(int num)
{
    int i, j;
    int print_counter;
    int counter = get_counter(num);

    for (i = num; i >= 1; i--)
    {
        print_counter = counter - i + 1;
        counter = print_counter - 1;

        for (j = 1; j <= i; j++)
        {
            if (j != i)
                cout << print_counter++ << "*";
            else
                cout << print_counter++;
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
