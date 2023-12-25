/*
Q.3 Find minimum and maximum element in an array.

Input:
N = 6
A[] = {3, 2, 1, 56, 10000, 167}
Output: 1 10000
Explanation: minimum and maximum elements of array are 1 and 10000.

Input:
N = 5
A[]  = {1, 345, 234, 21, 56789}
Output: 1 56789
Explanation: minimum and maximum element of array are 1 and 56789.

Author: Shreyash
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

vector<int> min_max(const vector<int> &nums)
{
    vector<int> ret_min_max;
    int min = nums[0], max = nums[0];

    for (int x : nums)
    {
        if (min > x)
            min = x;
        if (max < x)
            max = x;
    }
;
    return {min, max};
}

int main(void)
{
    int i, n, x;
    vector<int> nums, ret;

    cout << "\nEnter the number of elements: ";
    cin >> n;

    cout << "\nEnter the data: \n";
    for (i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    ret = min_max(nums);

    cout << "\nMinimum number is " << ret[0] << " & Maximum number is " << ret[1] << endl;

    return 0;
}