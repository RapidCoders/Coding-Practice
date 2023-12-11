/*
Q1. Write a program which accept N numbers from user and display addition of digits of each element.

Input: 5
Input: 85 36 98 125 225
Output: 13 9 17 8 9

Input: 7
Input: 854 698 236 14 75 32 65
Output: 17 23 14 5 12 5 11

Author: Vaibhav
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

void display_sum_digits(vector<int> nums)
{
    int sum;

    cout << "\nSum of digits of each number is: ";
    for (int num : nums)
    {
        sum = 0;

        while (num != 0)
        {
            sum += (num % 10);
            num /= 10;
        }
        cout <<  sum << " ";
    }
    cout << endl;
}

int main(void)
{
    int i, n, x;
    vector<int> nums;

    cout << "\nEnter the number of elements: ";
    cin >> n;

    cout << "\nEnter the data: ";
    for (i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    display_sum_digits(nums);

    return 0;
}
