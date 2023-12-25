/*
Q.1 You are given an array containing n distinct numbers taken from the range 0 to n. One number is missing from the array. Write a function to find and return the missing number.

Constraints:
1 <= arr[i] <= 100

Input: 5
Input: [1, 2, 3, 4, 6]
Output: 5

Input: 8
Input: [1, 2, 3, 4, 5, 6, 7, 9]
Output: 8

Input: 4
Input: [5, 2, 4, 1]
Output: 3

Input: 8
Input: [8, 3, 6, 1, 5, 2, 4, 9]
Output: 7

Input: 8
Input: [2, 1, 4, 5, 3, 8, 7, 6]
Output: 9

Author: Vaibhav
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int find_missing(vector<int> &nums)
{
    int sum1 = 0, sum2;

    for (int i = 0; i < nums.size(); i++)
        sum1 += nums[i];
    sum2 = (nums.size() + 1) * (nums.size() + 2) / 2;

    return sum2 - sum1;
}

int main(void)
{
    int i, n, x, ret;
    vector<int> nums;

    cout << "\nEnter the number of elements: ";
    cin >> n;

    cout << "\nEnter the data: \n";
    for (i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);  
    }

    ret = find_missing(nums);

    cout << "\nMissing number from array is: " << ret << endl;
    
    return 0;
}