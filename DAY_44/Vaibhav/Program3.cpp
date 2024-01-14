/*
Q.3 Write Recursive program to print fibonacci series.

Input: n = 15
Output: 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int fibonacci(int num)
{
    if (num <= 1)
        return num;
    else
        return fibonacci(num - 1) + fibonacci(num - 2);
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    cout << "0 ";
    for (int i = 1; i < num; i++)
        cout << fibonacci(i) << " ";

    return 0;
}
