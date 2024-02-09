/*
Q.1 Write a function that takes a list of integers as input and returns the count of peak elements in the list. A peak element is defined as an element that is greater than its adjacent neighbors.

Input: [1, 3, 2, 4, 1, 5, 6]
Expected Output: 2  (3, 4 are peaks)

Input: [1, 2, 3, 4, 5]
Expected Output: 0 (No peak)

Input: [5, 3, 6, 8, 4]
Expected Output: 1 (8 is peak)

Input: [10]
Expected Output: 0 (No peak)

Input: [2, -1, 0, -3, 5]
Expected Output: 1 (0 is peak)

Author: Vaibhav
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

int count_peaks(const vector<int> &nums)
{
    int i, count = 0, size = nums.size();

    if (size < 3)
        return 0;

    for (i = 1; i < size - 1; i++)
    {
        if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
            count++;
    }
    return count;
}

int main(void)
{
    int i, x, n;
    vector<int> nums;

    cout << "\nEnter the number of elements: ";
    cin >> n;

    cout << "\nEnter the data: ";
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    cout << "\nCount of peaks is: " << count_peaks(nums) << '\n';

    return 0;
}
