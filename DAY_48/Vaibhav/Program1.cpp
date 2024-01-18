/*
Q.1 Write a program that takes a list of integers as input and returns True if the numbers form a consecutive sequence (in ascending order) and False otherwise.

Input: [1, 2, 3, 4, 5]
Expected Output: True

Input: [10, 12, 14, 16, 18]
Expected Output: True

Input: []
Expected Output: False

Input: [7]
Expected Output: True

Input: [-3, -2, -1, 0, 1]
Expected Output: True

Input: [4, 5, 6, 8, 9]
Expected Output: False

Author: Vaibhav
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

bool check_consicutive(const std::vector<int> &nums)
{
    int i, difference;

    if (nums.empty())
        return false;

    if (nums.size() <= 2)
        return true;
        
    difference = nums[1] - nums[0];

    for (i = 1; i < nums.size() - 1; i++)
    {
        if ((nums[i + 1] - nums[i]) != difference)
            return false;
    }
    return true;
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

    if (check_consicutive(nums))
        cout << "\nEntered array is consecutive sequence.\n";
    else
        cout << "\nEntered array is not a consicutive sequence.\n";

    return 0;
}
