/*
Q.1 Write a function that takes a list of integers as input and returns the product of all non-zero digits in the list.

Input: [0, 2, 3, 0, 4, 5]
Expected Output: 120

Input: [0, 0, 0, 0]
Expected Output: 1

Input: [0, 0, 0, 5]
Expected Output: 5

Input: [-2, 0, -3, 0, 4, -5]
Expected Output: -120

Input: [10, 20, 0, 30, 40]
Expected Output: 240000

Author: Vaibhav
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

int non_zero_product(const vector<int> &nums)
{
    int product = 1;

    for (int x : nums)
    {
        if (x != 0)
            product *= x;
    }
    return product;
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

    cout << "\nProduct of all the non-zero values is: " << non_zero_product(nums) << '\n';

    return 0;
}
