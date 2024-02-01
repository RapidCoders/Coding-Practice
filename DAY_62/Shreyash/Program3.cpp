
// Q.3 Find the Armstrong Numbers in a given Interval.
// Input: low = 100, high = 400
// Output: 153 370 371 
// Author: Shreyash

#include<iostream>
#include<cmath>
using namespace std;

void armstrong(int i)
{
    int sum = 0;
    int new_i = i;
    while(i > 0)
    {
        int mod = i%10;
        sum = sum + pow(mod,3);
        i = i / 10;
    }
    if(sum == new_i)
    {
        cout << sum << " ";
    }

}

int main()
{
    int low , high;
    cin >> low >> high;
    for(int i = low;i<=high;i++)
    {

        armstrong(i);
    }
    return 0;
}
