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
