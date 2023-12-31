// Q.3 Write a program which accept input in binary format and convert it into decimal number.
// Input :n = 11000
// Output : 24

// Input :n = 1011
// Output : 11

// Author: Shreyash

#include<iostream>
// #include<cmath>
using namespace std;
int poww(int two,int i){
    int mul = 1;
    for(int j = 1;j<=i;j++){
        mul = 2 * mul;
    }
    return mul;
}

void decimal_binary(string num)
{
    string rnum = "";
    for(char i:num)
    {
        rnum = i + rnum;
    }
    // cout<<rnum;
    int sum = 0;
    for(int i = 0;i<=rnum.length()-1;i++)
    {
        if(rnum[i] == '1'){
            sum = sum + poww(2,i);
        }
        
    }
    cout<<sum;

}

int main()
{
    string num;
    cin>>num;
    decimal_binary(num);
    return 0;
}
