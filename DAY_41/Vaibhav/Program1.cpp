/*
Q.1 Write a program to implement a function that finds the maximum product of two integers in an array of integers. The array may contain both positive and negative integers.

Input: [1, 2, 3, 4, 5]
Output: 20

Input:  [-10, -3, 5, 2, -9]
Output: 90

Input:  [-5, -4, 2, 8, 1]
Output: 20

Input:  [4, -2, 8, -1, 3]
Output: 32

Author: Vaibhav
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int max_product_of_two_nums(const vector<int> nums)
{
    int max = nums[0] * nums[1];

    for (int i : nums)
    {
        for (int j : nums)
        {
            if (i != j)
            {
                if (max < (i * j))
                    max = (i * j);
            }
        }
    }
    return max;
}

int main(void)
{
    int i, x, n;
    vector<int> nums;

    cout << "\nEnter the number of elements: ";
    cin >> n;

    cout << "\nEnter the data: ";
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    cout << "\nMaximum product of two numbers from the array is: " << max_product_of_two_nums(nums) << endl;

    return 0;
}
