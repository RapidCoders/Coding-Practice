/*
Q.2 Write a program to find 3rd largest element in an array.

Input  : [1,2,5,6,3,2]
Output : 3rd largest element is : 3

Input  : [44,66,99,77,33,22,55]
Output : 3rd largest element is : 66

Author: Suyash
*/

#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;

// int find_third_largest(std::vector<int> nums)
// {
//     std::sort(nums.begin(), nums.end());
//     return nums[nums.size() - 3];
// }

int find_largest(const std::vector<int> &nums)
{
    int largest;

    if (nums.empty())
        return -1;

    largest = nums[0];

    for (int x : nums)
    {
        if (largest < x)
            largest = x;
    }
    return largest;
}

int find_second_largest(const std::vector<int> &nums)
{
    int largest = find_largest(nums), second_largest;

    if (nums.size() < 2)
        return -1;

    for (int x : nums)
    {
        if (x != largest)
        {
            second_largest = x;
            break;
        }
    }

    for (int x : nums)
    {
        if (second_largest < x && x != largest)
            second_largest = x;
    }
    return second_largest;
}

int find_third_largest(const std::vector<int> &nums)
{
    int largest = find_largest(nums), second_largest = find_second_largest(nums), third_largest;

    if (nums.size() < 3)
        return -1;

    for (int x : nums)
    {
        if (x != largest && x != second_largest)
            third_largest = x;
    }

    for (int x : nums)
    {
        if (third_largest < x && x != largest && x != second_largest)
            third_largest = x;
    }
    return third_largest;
}

int main(void)
{
    int i, x, n, result;
    std::vector<int> nums;

    cout << "\nEnter the number of elements: ";
    cin >> n;

    if (n != 0)
    {
        cout << "\nEnter the data: ";
        for (i = 1; i <= n; i++)
        {
            cin >> x;
            nums.push_back(x);
        }
    }

    result = find_third_largest(nums);

    if (result == -1)
        cout << "\nThere is no third largest element.\n";
    else
        cout << endl
             << find_third_largest(nums) << " is the third largest element.\n";

    return 0;
}
