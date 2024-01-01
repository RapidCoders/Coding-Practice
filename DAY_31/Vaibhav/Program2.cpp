/*
Q.2 Java Program to print Odd and Even Numbers from an Array.

Input  : 1,2,5,6,3,2
Output : Odd Numbers: 1 5 3
         Even Numbers: 2 6 2

Author: Suyash
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

void print_even_odd(const vector<int> &nums)
{
    cout << "\nOdd Numbers: ";
    for (int x : nums)
    {
        if (x % 2 != 0)
            cout << x << " ";
    }

    cout << "\n\nEven Numbers: ";
    for (int x : nums)
    {
        if (x % 2 == 0)
            cout << x << " ";
    }
    cout << endl;
}

int main(void)
{
    int i, x, num;
    vector<int> nums;

    cout << "\nEnter the number of elements: ";
    cin >> num;

    cout << "\nEnter the data: ";
    for (i = 1; i <= num; i++)
    {
        cin >> x;
        nums.push_back(x);
    }

    print_even_odd(nums);

    return 0;
}