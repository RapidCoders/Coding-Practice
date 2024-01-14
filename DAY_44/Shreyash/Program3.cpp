#include<iostream>
using namespace std;

int fibonacciSeries(int num)
{
    if((num==1)||(num==0))
    {
      return(num);
    }
    else 
    {
      return(fibonacciSeries(num-1)+fibonacciSeries(num-2));
    }
}    

int main()
{
    int num;
    cout<<"num :";
    cin>>num;
    for(int i = 0;i < num;i++)
    {
        cout << " " << fibonacciSeries(i);
    }
    // cout<<fibonacciSeries(num-1);
    return 0;
}
