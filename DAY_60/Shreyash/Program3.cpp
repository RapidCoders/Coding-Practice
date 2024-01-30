#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;

bool armstrong_or_not(string num)
{
    int sum = 0;
    for(int i = 0;i<num.length();i++)
    {
        char c = num[i];
        sum = sum + pow(atoi(&c), num.length());
    }

    if(sum == stoi(num))
        return true;

 return false;
}

int main()
{
    string num;
    cin >> num;
    if(armstrong_or_not(num)){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}
