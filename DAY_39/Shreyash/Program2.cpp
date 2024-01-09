#include<iostream>
using namespace std;

bool spynumornot(int num)
{
    int mod;
    int sum = 0;
    int prod = 1;
    while (num > 0)
    {
        mod = num % 10;
        sum = sum + mod;
        prod = prod*mod;
        num = num/10;
        
    }
    if(sum == prod){
        return true;
    }

    return false;
}
    


int main()
{
    int num;
    cout<<"num :";
    cin>>num;
    if(spynumornot(num))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}
