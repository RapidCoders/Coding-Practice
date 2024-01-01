/*
Q.3 Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

Input: nums = [2,2,1]
Output: 1

Input: nums = [4,1,2,1,2]
Output: 4

Author: Shreyash
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int find_unique(const vector<int> &nums)
{
    std::unordered_map<int, int> count_occ;

    for (int x : nums)
        count_occ[x]++;

    for (int x : nums)
    {
        if (count_occ.find(x)->second == 1)
            return x;
    }
    return -1;
}

int main(void)
{
    int i, x, size, unique_element;
    vector<int> nums;

    cout << "\nEnter the number of elements: ";
    cin >> size;

    cout << "\nEnter the data: ";
    for (i = 0; i < size; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    unique_element = find_unique(nums);

    if (unique_element == -1)
        cout << "\nThere is no unique element.\n";
    else
        cout << endl
             << unique_element << " is the unique element.\n";

    return 0;
}