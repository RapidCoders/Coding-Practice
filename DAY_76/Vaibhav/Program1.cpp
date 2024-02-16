/*
Q.1 Write a function that takes a list of integers as input and returns the first duplicate number found in the list. If there are no duplicates, return -1.

Input: [1, 2, 3, 4, 3, 5]
Expected Output: 3

Input: [1, 2, 3, 4, 5]
Expected Output: -1

Input: [1, 2, 3, 4, 3, 5, 5, 6]
Expected Output: 3

Input: [-1, 2, -3, 4, -3, 5]
Expected Output: -3

Input: []
Expected Output: -1

Author: Vaibhav
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

int find_duplicate(const vector<int> &nums)
{
    int count;

    for (int x : nums)
    {
        count = 0;

        for (int y : nums)
        {
            if (x == y)
                count++;
            if (count > 1)
                return x;
        }
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

    result = find_duplicate(nums);

    if (result == -1)
        cout << "\nThere is no duplicate element.\n";
    else
        cout << "\nFirst duplicate element is: " << find_duplicate(nums) << '\n';

    return 0;
}
