
// Q.3 write Recursive program to Calculate Factorial of given number.
// Input: n = 15
// Output: 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377
// Author: Shreyash

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
