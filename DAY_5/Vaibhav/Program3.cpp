/*
Q3. Write a program which accept two numbers and give their relationship.

Input: 5 -5
Output: 5 is greater than -5

Input: 42 42
Output: Numbers are same

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
typedef int status;
#define EQUAL 0
#define GREATER 1
#define SMALLER 2

template <class T>
status relationship(T a, T b)
{
    if (a > b)
        return GREATER;
    else if (a < b)
        return SMALLER;
    return EQUAL;
}

int main(void)
{
    int x, y;
    status ret;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    ret = relationship(x, y);

    if (ret  == GREATER)
        cout << x << " is greater than " << y << endl;
    else if (ret == SMALLER)
        cout << x << " is smaller than " << y << endl;
    else
        cout << x << " and " << y << " are equal" << endl;

    return 0;
}
