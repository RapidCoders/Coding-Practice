#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int gCF(int num1,int num2)
{
    while(num1 != num2) 
    {
    if(num1 > num2)
      num1 -= num2;
    else
      num2 -= num1;
    }

    return num1;
    
}

int main()
{
    int num1;
    int num2;
    cout<<"Enters Numbers Separated by space:";
    cin>>num1>>num2;
    cout<<"the GCF of "<<num1<<" and "<<num2<<" is "<<gCF(num1,num2);
    return 0;
}
