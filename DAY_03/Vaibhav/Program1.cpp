/*
Q1. Write a program which accept N number from the user and return the average.

Input: 5
Input: 10 20 30 40 50
Output: 30

Input: 6
Input: 85 69 21 45 73 25
Output: 53

Author: Vaibhav
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int average(vector<int> nums)
{
    int sum = 0;

    for (int ele : nums)
        sum += ele;

    return sum / nums.size();
}

int main(void)
{
    int i, len, ele;
    vector<int> nums;

    cout << "Enter the number of elements: ";
    cin >> len;

    for (i = 0; i < len; i++)
    {
        cin >> ele;
        nums.push_back(ele);
    }

    cout << "\nAverage of all the elements is: " << average(nums) << endl;

    return 0;
}
