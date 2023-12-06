/*
Q2. Program to find frequency of each element in array.(Take array elements from user)
Input:

arr = [1, 2, 8, 3, 2, 2, 2, 5, 1]
Output:

Element | Frequency
     1  |  2
     2  |  4
     8  |  1
     3  |  1
     5  |  1

Author: Suyash
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::unordered_map;

void display_frequency(vector<int> nums)
{
    int i;
    unordered_map<int, int> freq_map;

    for (i = 0; i < nums.size(); i++)
        freq_map[nums[i]]++;

    for (auto &entry: freq_map)
        cout << "\nFrequency of " << entry.first << " is " << entry.second;
}

int main(void)
{
    int i, n, x;
    vector<int> nums;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the data: ";
    for (i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    display_frequency(nums);

    return 0;
}
