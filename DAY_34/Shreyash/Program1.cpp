#include<iostream>
using namespace std;

void firstnonrepeat(string str)
{
    int count = 0;
    for(int i = 0;i<str.length();i++)
    {
        for(int j = 0;j<str.length();j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }


        }
        if(count == 1)
        {
            cout<<i;
            break;
        }
        count = 0;
    }
}

int main()
{
    string str;
    cin>>str;
    firstnonrepeat(str);
    return 0;
}
