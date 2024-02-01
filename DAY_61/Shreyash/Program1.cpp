#include<iostream>
#include<cmath>
using namespace std;

void difference(string str,string str1)
{
    int count = 0;
    for(int j = 0;j < str.length(); j++)
    {
        if(str[j] != str1[j])
        {
            count++;
        }
    }
    cout << count;
}

int main()
{
    string str;
    string str1;
    cout << "enter large string first ";
    cin >> str >> str1;
    difference(str,str1);
    
    return 0;
}
