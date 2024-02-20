/*
Q.1 Write a function that takes a list of integers as input and returns another list where each element is the sum of the absolute differences between that element and all other elements in the list.

Input: [2, 4, 6, 8]
Output: [12, 8, 8, 12]

Explanation:
For the first element (2), the absolute differences with other elements are |2-4| + |2-6| + |2-8| = 2 + 4 + 6 = 12.
Similarly, for the second element (4), the absolute differences are |4-2| + |4-6| + |4-8| = 2 + 2 + 4 = 8.
The same process applies to other elements.

Input: [-3, -1, 0, 2, 5]
Expected Output: [18, 12, 11, 13, 22]

Input: [1, 1, 1, 1]
Expected Output: [0, 0, 0, 0]

Input: [9]
Expected Output: [0]

Input: []
Expected Output: []

Author: Vaibhav
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

vector<int> sum_abs_diff(vector<int> nums)
{
    vector<int> result;
    int i, j, sum, diff, size = nums.size();

    for (i = 0; i < size; i++)
    {
        sum = 0;
        for (j = 0; j < size; j++)
        {
            if (i != j)
            {
                diff = nums[i] - nums[j];
                if (diff < 0)
                    diff = -diff;
                sum += diff;
            }
        }
        result.push_back(sum);
    }
    return result;
}

int main(void)
{
    int i, n, x;
    vector<int> nums, result;

    cout << "\nEnter the number of elements: ";
    cin >> n;

    cout << "\nEnter the data: ";
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    result = sum_abs_diff(nums);
    cout << "\nResult is: ";
    for (i = 0; i < n; i++)
        cout << result[i] << ' ';

    return 0;
}
