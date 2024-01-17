/*
Q.3 Write a program which accept n numbers in array and gives difference between maximum and minimum.

Input: n = 5
Input: 32 332 -23 -154 65
Output: 486

Author: Shreyash
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

int find_min(const std::vector<int> &nums)
{
    int min = nums[0];

    for (int x : nums)
    {
        if (min > x)
            min = x;
    }
    return min;
}

int find_max(const std::vector<int> &nums)
{
    int max = nums[0];

    for (int x : nums)
    {
        if (max < x)
            max = x;
    }
    return max;
}

int difference(const std::vector<int> &nums)
{
    return ((find_max(nums)) - (find_min(nums)));
}

int main(void)
{
    int i, x, n;
    std::vector<int> nums;

    cout << "\nEnter the number of elements: ";
    cin >> n;

    cout << "\nEnter the data: ";
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    auto difference = [](const std::vector<int> &nums) -> int
    {
        return ((find_max(nums)) - (find_min(nums)));
    };

    cout << "\nDifference between maximum and minimum number is: " << difference(nums) << endl;

    return 0;
}
