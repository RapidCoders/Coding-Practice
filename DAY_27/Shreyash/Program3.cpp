
// Q.3 Write program program to remove brackets (),{},[] from an algebraic expression.
// Input: a+b(/(c*c
// Output:a+b/c*c
// Author: Shreyash
#include<iostream>
using namespace std;

void remover(string num){
    string new_eq = "";
    for(int i = 0;i<=num.size();i++)
    {
        if(num[i] == '('||num[i] == ')'||num[i] == '{'||num[i] =='}'||num[i]=='['||num[i] == ']')
        {
            continue;
        }else
        {
            new_eq = new_eq + num[i];
        }
    }
    cout<<new_eq;
}

int main()
{
    string num;
    cin>>num;
    remover(num);
    return 0;
}
