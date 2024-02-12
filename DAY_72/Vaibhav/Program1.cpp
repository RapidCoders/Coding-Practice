/*
Q.1 Write a function that takes an array of integers as input and returns True if the array represents a mountain, and False otherwise. An array is considered a mountain if it consists of elements that are strictly increasing up to a peak, and then strictly decreasing.

Input: [1, 2, 3, 2, 1]
Expected Output: True

Input: [1, 2, 3, 4, 5]
Expected Output: False

Input:  [1, 2, 3, 4, 4, 3, 2, 1]
Expected Output: True

Input: []
Expected Output: False

Input: [6, 7, 8, 5, 4]
Expected Output: False

Input: [1]
Expected Output: True

Author: Vaibhav
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

// bool mountain_finder(vector<int> nums)
// {
//     int i, length = nums.size();

//     if (length == 0)
//         return false;

//     for (i = 1; i < length - 1; i++)
//     {
//         if ((!(length % 2)) && (nums[length / 2] == nums[(length / 2) - 1]) && (i == length / 2))
//             continue;

//         if (i > length / 2)
//         {
//             if (nums[i] <= nums[i + 1])
//                 return false;
//             continue;
//         }

//         if (nums[i - 1] >= nums[i])
//             return false;
//     }
//     return true;
// }

bool mountain_finder(vector<int> nums)
{
    int i = -1, j = nums.size(), length = nums.size();

    if (length == 0)
        return false;

    while ((++i) < (--j))
    {
        if ((nums[(length / 2) - 1] == nums[length / 2]) && (!(length % 2)) && (j == length / 2))
            continue;

        if (nums[i] >= nums[i + 1] || nums[j] >= nums[j - 1])
            return false;
    }
    return true;
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

    if (mountain_finder(nums))
        cout << "\nIt is a mountain.\n";
    else
        cout << "\nIt is not a mountain.\n";

    return 0;
}
