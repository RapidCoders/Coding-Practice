/*
Q.1 Write a function that takes a positive integer n as input and returns the sum of the squares of all positive integers up to n.

Input: 5
Output: 55  # 1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 1 + 4 + 9 + 16 + 25 = 55

Input: 10
Expected Output: 385

Input: 1
Expected Output: 1

Input: 0
Expected Output: 0

Input: -5
Expected Output: None (or any indication that input is invalid)

Author: Vaibhav
*/

#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::vector;

int sum_squares(int num)
{
    int i, sum = 0;

    if (num < 0)
        return -1;

    for (i = 1; i <= num; i++)
        sum = sum + (i * i);
    return sum;
}

int main(void)
{
    int num, result;

    cout << "\nEnter the number: ";
    cin >> num;

    result = sum_squares(num);

    if (result == -1)
        cout << "\nERROR: Invalid input.\n";
    else
        cout << "\nSum of the squares upto " << num << " is: " << result << '\n';

    return 0;
}
