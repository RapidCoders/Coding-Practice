#include<iostream>
#include<cmath>
using namespace std;

void multichar(char i,int num)
{
    for(int j = 0;j < num; j++)
    {
        cout<<(char)i;
    }

}

int main()
{
    string str;
    int num ;
    cin >> str >> num;
    for(int i = 0;i<str.length();i++)
    {
        multichar(str[i],num);
    }
    return 0;
}
