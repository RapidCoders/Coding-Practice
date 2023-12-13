/*
Q.1 Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to the target.

Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1]
Explanation: nums[0] + nums[1] equals 9, so the answer is [0, 1].

Input: nums = [3, 2, 4], target = 6
Output: [1, 2]
Explanation: nums[1] + nums[2] equals 6.

Input: nums = [3, 2, 9, 7], target = 4
Output: Not Found

Author: Vaibhav
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using std::cin;
using std::cout;
using std::endl;
using std::unordered_map;
using std::vector;

vector<int> two_sum(vector<int> nums, int target)
{
    int i;

    unordered_map<int, int> indices;

    for (i = 0; i < nums.size(); i++)
    {
        int comp = target - nums[i];

        auto it = indices.find(comp);

        if (it != indices.end())
            return {it->second, i};

        indices[nums[i]] = i;
    }
    return {};
}

int main()
{
    int i, x, n;
    vector<int> nums;
    vector<int> indices;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the data: ";
    for (i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    cout << "Enter the target value: ";
    cin >> x;

    indices = two_sum(nums, x);

    if (indices.size() != 0)
        cout << "\nnums[" << indices[0] << "] + nums[" << indices[1] << "] equals to " << x << endl;
    else
        cout << "\nNot Found!!!\n";

    return 0;
}
