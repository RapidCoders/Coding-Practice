#include<iostream>
#include<algorithm>
using namespace std;

bool spyornot(int num)
{
    int sum = 0;
    int mul = 1;
    while(num > 0)
    {
        int mod = num % 10;
        sum = sum + mod;
        mul = mul * mod;
        num = num/10;
    }
    if(sum == mul)
    {
        return true;
    }
    else{
        return false;
    }

    
}

int main()
{
    int num;
    cin>>num;
    if(spyornot(num))
        cout<<"True";
    else
        cout<<"False";
    return 0;
}
