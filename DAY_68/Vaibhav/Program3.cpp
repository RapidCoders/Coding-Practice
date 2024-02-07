/*
Q.3 write a Program for Trapping Rain water problem.

Here, in this page we  will discuss one of the famous problem of  Trapping Rain Water in C++ . We are given with n non-negative integers representing an elevation map where the width of each bar is 1, we need to compute how much water it is able to trap after raining.

Example :
Input : arr[5] = {3, 0, 2, 0, 4}
Output : 7
Explanation : We can trap “3 units” of water between 3 and 2, “1 unit” on top of bar 2 and “3 units” between 2 and 4. See below diagram also.

Input : arr[7] = {1, 0, 3, 0, 4, 0, 2}
Output : 6

Author: Shreyash
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

int trapping_rain(const vector<int> &nums)
{
    int first = 0, last = nums.size() - 1, r_max = 0, l_max = 0, trapped_water = 0;

    while (first < last)
    {
        if (nums[first] < nums[last])
        {
            if (nums[first] >= l_max)
                l_max = nums[first++];
            else
                trapped_water = (trapped_water + (l_max - nums[first++]));
        }
        else
        {
            if (nums[last] >= r_max)
                r_max = nums[last--];
            else
                trapped_water = (trapped_water + (r_max - nums[last--]));
        }
    }
    return trapped_water;
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

    cout << '\n'
         << trapping_rain(nums) << " units of water gets trapped.\n";

    return 0;
}
