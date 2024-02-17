/*
Q.3 Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given array is 7.

Input:
N = 5
arr[] = 7 10 4 20 15
K = 4
Output : 15
Explanation : 4th smallest element in the given array is 15.

Author: Shreyash
*/

#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::vector;

int kth_smallest_element(vector<int> nums, int k)
{
    if (k > nums.size())
        return -1;

    std::sort(nums.begin(), nums.end());
    return nums[k - 1];
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

    cout << "\nEnter the value of \'K\': ";
    cin >> x;

    result = kth_smallest_element(nums, x);

    if (result == -1)
        cout << "\nERROR: Value of \'K\' must be less than size of array.\n";
    else if (x == 1)
        cout << '\n'
             << x << "st smallest element in the given array is: " << result << '\n';
    else if (x == 2)
        cout << '\n'
             << x << "nd smallest element in the given array is: " << result << '\n';
    else if (x == 3)
        cout << '\n'
             << x << "rd smallest element in the given array is: " << result << '\n';
    else
        cout << '\n'
             << x << "th smallest element in the given array is: " << result << '\n';

    return 0;
}
