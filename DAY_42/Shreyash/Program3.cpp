
Q.3 write Recursive program which accept number from user and return sum upto nth term.
Input: n = 10
Output: 55

Input: n = 5
Output: 15
Author: Shreyash

#include<iostream>
using namespace std;

int summ(int num)
{
    if(num > 0){
        return num + summ(num-1); 
    }

    return 0;
}    

int main()
{
    int num;
    cout<<"num :";
    cin>>num;
    int result = summ(num);
    cout<<result;
    return 0;
}
