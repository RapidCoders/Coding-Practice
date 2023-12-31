/*
Q.3 Write program for removing duplicate element in an array.

Input: 10, 20, 20, 30, 40, 40, 40, 50, 50
Output: 10 20 30 40 50

Author: Shreyash
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

bool is_element(const vector<int> &nums, int num)
{
    for (int x : nums)
    {
        if (x == num)
            return true;
    }
    return false;
}

vector<int> &rm_duplicates(vector<int> &nums)
{
    vector<int> temp;

    for (int &x : nums)
    {
        if (!is_element(temp, x))
            temp.push_back(x);
    }
    nums = temp;
    return nums;
}

int main(void)
{
    int i, x, size;
    vector<int> nums;

    cout << "\nEnter the number of elements: ";
    cin >> size;

    cout << "\nEnter the data: ";
    for (i = 0; i < size; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    rm_duplicates(nums);
    cout << "\nArray after removing duplicate elements: ";
    for (int &x : nums)
        cout << x << " ";

    return 0;
}