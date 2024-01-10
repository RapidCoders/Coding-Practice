/*
Q.1 Write a program to implement a function that finds the second-largest element in an array. The function should take an array of integers as input and return the second-largest element. If there is no second-largest element, return -1.

Input: [3, 8, 5, 2, 7, 1, 6, 4]
Output: 7

Input:  [10, 10, 10, 10, 10]
Output: -1

Input:  [-5, -2, 0, 3, 7, 1]
Output: 3

Input:  [5, 5, 5, 5, 5, 5, 5, 5]
Output: -1

Author: Vaibhav
*/

#include <iostream>
#include <vector>
#include <set>
#include <iterator>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

// This solution is also working fine.
// int find_second_largest(const vector<int> &nums)
// {
//     std::set uniques(nums.begin(), nums.end());

//     if (uniques.size() > 1)
//         return *std::prev(uniques.end(), 2);
//     return -1;
// }

int find_largest(const vector<int> &nums)
{
    int largest = nums[0];

    for (int x : nums)
    {
        if (largest < x)
            largest = x;
    }
    return largest;
}

int find_second_largest(const vector<int> &nums)
{
    int largest, second_largest;
    largest = second_largest = find_largest(nums);

    for (int x : nums)
    {
        if (x != largest)
        {
            second_largest = x;
            break;
        }
    }

    if (largest == second_largest)
        return -1;

    for (int x : nums)
    {
        if (second_largest < x && x != largest)
            second_largest = x;
    }
    return second_largest;
}

int main(void)
{
    int i, x, n, ret_val;
    vector<int> nums;

    cout << "\nEnter the number of elements: ";
    cin >> n;

    cout << "\nEnter the data: ";
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    ret_val = find_second_largest(nums);

    if (ret_val != -1)
        cout << "\nThe second largest element from array is: " << ret_val << endl;
    else
        cout << "\nThere is no second largest element in array.\n";

    return 0;
}
