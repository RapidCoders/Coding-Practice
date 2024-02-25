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
