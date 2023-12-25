/*
Q.2 Write a program to find median for user defined inputs.

Input : 25,11,7,76,26
Output : 7

Input : 25,11,7,76,26,10
Output : 41

Author: Suyash
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int find_median(vector<int> nums)
{
    if (nums.size() % 2 != 0)
        return nums[((nums.size()) / 2)];
    else
        return ((nums[((nums.size() / 2) - 1)] + nums[(nums.size() / 2)]) / 2);
}

int main(void)
{
    int i, n, x;
    vector<int> nums;

    cout << "\nEnter the number of elements: ";
    cin >> n;

    cout << "\nEnter the data: \n";
    for (i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    cout << "\nMedian of above input is: " << find_median(nums) << endl;

    return 0;
}