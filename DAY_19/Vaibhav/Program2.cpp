/*
Q.2 Program to print the average of n numbers.

For example: 1,2,3,4,5
Number of all elements = 5
Sum of all elements = 1+2+3+4+5 =15
Average = Sum of all elements / number of all elements = 15/5 =3
Average = 3

Author: Suyash
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

    for (int x : nums)
        sum += x;

    return sum / nums.size();
}

int main(void)
{
    int i, n, x;
    vector<int> nums;

    cout << "\nEnter the number of elements: ";
    cin >> n;

    cout << "\nEnter the data: ";
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    cout << "\nAverage of all the numbers is: " << average(nums) << endl;

    return 0;
}
