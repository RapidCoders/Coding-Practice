/*
Q.3 Given an unsorted array of size N. Find the first element in array such that all of its left elements are smaller and all right elements to it are greater than it.

Input:
N = 4
A[] = {4, 2, 5, 7}
Output: 5
Explanation : Elements on left of 5 are smaller than 5and on right of it are greater than 5.

Input:
N = 3
A[] = {11, 9, 12}
Output: -1

Author: Shreyash
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

int check(const vector<int> &nums)
{
    int i;

    for (i = 1; i < nums.size() - 1; i++)
    {
        if ((nums[i - 1] < nums[i]) && (nums[i + 1] > nums[i]))
            return nums[i];
    }
    return -1;
}

int main(void)
{
    vector<int> nums;
    int i, n, x, result;

    cout << "\nEnter the number of elements: ";
    cin >> n;

    cout << "\nEnter the data: ";
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    result = check(nums);

    if (result == -1)
        cout << "\nThere is no element that its left element is smaller and right element to it is greater than it.\n";
    else
        cout << '\n'
             << result << " is the element which have its left element is smaller and right element to it is greater than it.\n";

    return 0;
}
