/*
Q.1 Write a program that takes an array of integers as input and partitions it into two subarrays, where the first subarray contains all the even numbers and the second subarray contains all the odd numbers. The order of elements within each subarray should remain the same as in the original array.

Input: [3, 6, 8, 2, 5, 7]
Expected Output: [[6, 8, 2], [3, 5, 7]]

Input: [2, 4, 6, 8]
Expected Output: [[2, 4, 6, 8], []]

Input: [1, 3, 5, 7, 9]
Expected Output: [[], [1, 3, 5, 7, 9]]

Input: [-3, 6, -8, 2, 5, -7]
Expected Output: [[6, -8, 2], [-3, 5, -7]]

Input: []
Expected Output: [[], []]

Author: Vaibhav
*/

#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

vector<vector<int>> even_odd_subarray(const vector<int> &nums)
{
    vector<vector<int>> result(2);

    for (int x : nums)
    {
        if (!(x % 2))
            result[0].push_back(x);
        else
            result[1].push_back(x);
    }

    return result;
}

int main(void)
{
    int i, x, size;
    vector<int> nums;
    vector<vector<int>> result;

    cout << "\nEnter the number of elements: ";
    cin >> size;

    cout << "\nEnter the data: ";
    for (i = 1; i <= size; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    result = even_odd_subarray(nums);

    cout << "\nResult is: ";
    for (i = 0; i < result[0].size(); i++)
        cout << result[0][i] << " ";
    for (i = 0; i < result[1].size(); i++)
        cout << result[1][i] << " ";
    cout << '\n';

    return 0;
}
