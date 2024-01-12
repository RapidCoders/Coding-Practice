/*
Q.1 Write a program to implement binary search on a sorted array. The program should take an array of integers and a target value as input, and return the index of the target value in the array. If the target is not present, return -1.

Input: [1, 2, 3, 4, 5, 6, 7, 8, 9]
Target: 6
Output: 5

Input: [1, 2, 3, 4, 5, 6, 7, 8, 9]
Target: 1
Output: 0

Input: [1, 2, 3, 4, 5, 6, 7, 8, 9]
Target: 9
Output: 8

Input: [1, 2, 3, 4, 5, 6, 7, 8, 9]
Target: 10
Output: -1

Author: Vaibhav
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int binary_search(const vector<int> &nums, int target)
{
    int left = 0, right = nums.size() - 1, mid;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (nums[mid] > target)
            right = mid - 1;
        else if (nums[mid] < target)
            left = mid + 1;
        else
            return mid;
    }
    return -1;
}

int main(void)
{
    int i, x, n, target, ret_val;
    vector<int> nums;

    cout << "\nEnter the number of elements: ";
    cin >> n;

    cout << "\nEnter the data: ";
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    cout << "\nEnter the target value: ";
    cin >> target;

    ret_val = binary_search(nums, target);

    if (ret_val != -1)
        cout << endl
             << target << " is at index " << ret_val << endl;
    else
        cout << endl
             << target << " not found.\n";

    return 0;
}
