/*
Q.3 write Recursive program which accept number from user and return sum upto nth term.

Input: n = 10
Output: 55

Input: n = 5
Output: 15

Author: Shreyash 
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int recursive_sum(int num)
{
    if (num == 0)
        return 0;

    return num + recursive_sum(num-1);
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    cout << "\nSum upto the " << num << "th term is: " << recursive_sum(num) << endl;

    return 0;
}
