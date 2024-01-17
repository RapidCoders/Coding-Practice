/*
Q.1 Write a function that takes a list of integers as input and returns the sum of all unique numbers in the list. If a number appears more than once, it should only be counted once in the sum.

Input: [1, 2, 3, 4, 5]
Expected Output: 15  # (1 + 2 + 3 + 4 + 5)

Input: [2, 2, 2, 2, 2]
Expected Output: 2  # (Only one unique number)

Input: [1, 2, 3, 2, 4, 5, 5, 6]
Expected Output: 21  # (1 + 2 + 3 + 4 + 5 + 6)

Input: [-1, -2, 3, -2, 4, 5, -5, 6]
Expected Output: 5  # (-1 + -2 + 3 + 4 + 5 + 6)

Author: Vaibhav
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using std::cin;
using std::cout;
using std::endl;

// int sum_unique(const std::vector<int> &nums)
// {
//     int sum = 0;
//     std::unordered_set<int> uniques(nums.begin(), nums.end());

//     for (int x : uniques)
//         sum += x;
//     return sum;
// }

bool check_element(const std::vector<int> &nums, int key)
{
    for (int x : nums)
    {
        if (x == key)
            return true;
    }
    return false;
}

int sum_unique(const std::vector<int> &nums)
{
    int sum = 0;
    std::vector<int> uniques;

    if (nums.empty())
        return 0;

    for (int x : nums)
    {
        if (!check_element(uniques, x))
            uniques.push_back(x);
    }

    for (int x : uniques)
        sum += x;
    return sum;
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

    cout << "\nSum of all the unique numbers is: " << sum_unique(nums) << endl;

    return 0;
}
