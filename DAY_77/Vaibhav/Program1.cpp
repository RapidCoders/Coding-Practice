/*
Q.1 Write a function that takes a list of integers as input, where each integer appears an even number of times except for one, which appears an odd number of times. The function should return the integer that appears an odd number of times.

Input: [1, 2, 3, 2, 1, 3, 4, 4, 5]
Expected Output: 5

Input: [-1, 2, 3, 2, -1, 3, 4, 4, 5]
Expected Output: 5

Input: [1000000, 2, 3, 2, 1000000, 3, 4, 4, 999999]
Expected Output: 999999

Input: [-1, -2, -3, -2, -1, -3, -4, -4, -5]
Expected Output: -5

Input: []
Expected Output: None

Author: Vaibhav
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using std::cin;
using std::cout;
using std::unordered_map;
using std::vector;

int odd_frequency(const vector<int> &nums)
{
    unordered_map<int, int> frequecy;

    for (int x : nums)
        frequecy[x]++;

    for (int x : nums)
    {
        if (frequecy[x] % 2 != 0)
            return x;
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

    result = odd_frequency(nums);
    if (result == -1)
        cout << "\nThere is no odd frequency number.\n";
    else
        cout << '\n'
             << result << " have odd frequency.\n";

    return 0;
}
