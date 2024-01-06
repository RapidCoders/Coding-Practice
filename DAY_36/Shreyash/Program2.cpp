
// Q.2 Write a method to check and return whether given number is duck number or not.
// Explanation:
// Duck number is another special positive non-zero number that contains zero in it. The digit zero should not be presented at the starting of the number.
// Zero can be present at any of the positions except the beginning of the number.

// Let's understand some examples of Duck numbers.

// 3210 is a Duck number because it contains zero at the end of the number but not present at the beginning of it.
// 08237 is not a Duck number because it contains zero at the beginning of it.
// 7033 is a Duck number because it contains zero at the second position, not at the beginning.
// 030405 is not a Duck number because it also contains zero in starting of the number.
// 00153 is also not a Duck number because it contains leading zeros.

// Author: Suyash

#include<iostream>
using namespace std;

bool ducknum(int num)
{
    int mod;
    while(num>0)
    {
        mod = num%10;
        if(mod == 0)
        {
            return true;
        }
        num = num/10;

    }
    return false;

}

int main()
{
    int num;
    cout<<"num :";
    cin>>num;
    if(ducknum(num))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }

    return 0;
}
