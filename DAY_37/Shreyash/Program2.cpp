
// Q.2 Write a method to check and return whether given number is nude number or not.
// Explanation:
// A number is said to be nude number if all the digits of the number is the factor of that number.
// In short, nude numbers are those numbers that expose their factor.

// Example 1:
// 672 is a nude number because all the digits (6, 7, and 2) of the number are the factors of the number itself.

// Let's see another example.

// Example 2:
// 101 is not a nude number because all of the digits of the number 101, i.e., 1 and 0, do not divide the number 101.
// Observe that 1 divides the number 101, but 0 does not divide the number. Thus, we got at least one digit that does not divide the number 101.

// Author: Suyash

#include<iostream>
using namespace std;

bool nudenumornot(int num)
{
    int mod;
    int temp = num;
    int count = 0;
    int numbersdiv = 0;
    while(num > 0)
    {
        mod = num%10;
        if(temp%mod == 0)
        {
            numbersdiv++;
        }
        num = num/10;
        count++;

    }
    if(numbersdiv == count)
    {
        return true;
    }

    return false;

}

int main()
{
    int num;
    cout<<"num :";
    cin>>num;
    if(nudenumornot(num))
    {
        cout<<"True";
    }
    else
    
        cout<<"False";
    }

    return 0;
}
