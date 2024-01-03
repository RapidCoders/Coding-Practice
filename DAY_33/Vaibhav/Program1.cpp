/*
Q.1 Given an array of integers, find the majority element. The majority element is the element that appears more than or equal to ⌊n/2⌋ times. Write a function to find the majority element. You may assume that the array is non-empty and the majority element always exists in the array.

Input: [3, 3, 4, 2, 4, 4, 2, 4, 4]
Output: 4

Input: [1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9]
Output: None.

Input: [2, 2, 1, 1, 1, 2, 2]
Output: 2

Input: [3, 1, 1, 1, 2, 2, 2, 3, 3, 3]
Output: None.

Input: [2, 2, 2, 1, 1, 3, 3, 3, 3]
Output: 3

Author: Vaibhav
*/

#include <vector>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int find_majority(const vector<int> &nums)
{
    int max, majority;
    std::unordered_map<int, int> frequency;
    std::unordered_set uniques(nums.begin(), nums.end());

    for (int x : nums)
        frequency[x]++;

    majority = nums[0];
    max = frequency[nums[0]];

    for (int x : uniques)
    {
        if (max < frequency[x])
        {
            max = frequency[x];
            majority = x;
        }
    }
    return (frequency[majority] >= nums.size() / 2) ? majority : -1;
}

int main(void)
{
    int i, x, num;
    std::vector<int> nums;

    cout << "\nEnter the number: ";
    cin >> num;

    cout << "\nEnter the data: ";
    for (i = 1; i <= num; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    x = find_majority(nums);
    if (x == -1)
        cout << "\nThere is no majority element in given array.\n";
    else
        cout << "\nMajority element from the given array is: " << x << endl;

    return 0;
}