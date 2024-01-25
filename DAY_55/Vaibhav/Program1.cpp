/*
Q.1 Write a function that takes a positive integer as input and returns the length of the longest binary gap. A binary gap is the longest sequence of consecutive zeros in the binary representation of the number.

Input: 15
Expected Output: 0  # Binary representation: 1111, no gap.

Input: 20
Expected Output: 1  # Binary representation: 10100, one gap between the 1s.

Input: 1048577
Expected Output: 19  # Binary representation: 100000000000000000001, longest gap between the 1s.

Input: 77
Expected Output: 2  # Binary representation: 1001101, two gaps between the 1s.

Input: 0
Expected Output: 0  # Binary representation: 0, no gap.

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int find_longest_gap(int num)
{
    int gap = 0, longest_gap = 0;

    if (num == 0)
        return 0;

    while (num)
    {
        if (num & 1)
        {
            num = num >> 1;

            while ((num & 1) != 1 && num != 0)
            {
                gap++;
                num = num >> 1;
            }
            longest_gap = (gap > longest_gap) ? gap : longest_gap;
            gap = 0;
        }
        else
            num = num >> 1;
    }
    return longest_gap;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    cout << "\nLongest gap between two one's is: " << find_longest_gap(num) << endl;

    return 0;
}
