/*
Q.2 Write a program to check whether given number is Fascinating number or not.
Example :
Let's take any number (n) say 327 and check whether the given number is fascinating or not. On multiplying the given number (n) by 2 and 3, we get:

327×2=654

327×3=981

Now, concatenate the above results to the given number (n).

"327"+"654"+ "981"= 327654981

We observe that the resultant () contains all the digits from 1 to 9, exactly once. Hence, the given number 327 is a fascinating number. Note that, we have not added the result to the given number. Some other fascinating numbers are 192, 219, 273, 327, 1902, 1920, 2019 etc.

Author: Suyash
*/

#include <set>
#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::remove;
using std::set;
using std::string;
using std::to_string;

bool check_fascinating(int num)
{
    string final_num;
    set<char> check_unique;

    final_num = std::to_string(num) + to_string(num * 2) + to_string(num * 3);

    final_num.erase(remove(final_num.begin(), final_num.end(), '0'), final_num.end());

    for (char c : final_num)
        check_unique.insert(c);

    if (final_num.size() != check_unique.size())
        return false;
    return true;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    if (check_fascinating(num))
        cout << endl
             << num << " is fascinating number.\n";
    else
        cout << endl
             << num << " is not a fascinating number.\n";

    return 0;
}