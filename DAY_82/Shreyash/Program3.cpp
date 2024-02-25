// Q.3 Given a non-negative number N and two values L and R. The problem is to toggle the bits in the range L to R in the binary representation of N, i.e, to toggle bits from the rightmost Lth bit to the rightmost Rth bit. A toggle operation flips a bit 0 to 1 and a bit 1 to 0. Print N after the bits are toggled.
// Input:
// N = 17 , L = 2 , R = 3
// Output:
// 23
// Explanation:
// (17)10 = (10001)2.  After toggling all
// the bits from 2nd to 3rd position we get
// (10111)2 = (23)10

// Input:
// N = 50 , L = 2 , R = 5
// Output:
// 44
// Explanation:
// (50)10 = (110010)2.  After toggling all
// the bits from 2nd to 5th position we get
// (101100)2 = (44)10
// Author: Shreyash

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;


string decimal_binary(int num)
{
    string numb = "";
    while(num > 0)
    {
        int mod = num % 2;
        numb = to_string(mod) + numb;
        num /= 2;

    }
    return numb;
}

int binary_decimal(string nstr)
{
    int sum = 0;
    int j = 0;
    for (int i = nstr.length()-1; i >= 0; i--)
    {
        int power = 0;
        if(nstr[i] == '1')
        {
            power = pow(2,j);
            sum = power + sum;
        }
        j++;
    }
    return sum;
}

string restr(string numb)
{
    string rstr = "";
    for(int i = 0;i < numb.length();i++)
    {
        rstr = numb[i] + rstr;
    }
    return rstr;
}


int main()
{
    int num,l,r;
    cin >> num >> l >> r;
    string res = decimal_binary(num);
    string rstr = restr(res);
    // cout << rstr;
    string nstr = "";
    for (int i = 0; i < rstr.length(); i++)
    {
        if(i >= l-1 && i <= r-1)
        {
            if(rstr[i] == '0')
            {
                nstr = '1' + nstr;
            }else if(rstr[i] == '1'){
                nstr = '0' + nstr;
            }
        }
        else
        {
            nstr  = rstr[i] + nstr;
        }
        
    }
    cout << binary_decimal(nstr);
    
    return 0;
}
