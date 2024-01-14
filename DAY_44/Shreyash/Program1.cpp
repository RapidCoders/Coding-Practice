#include<iostream>
using namespace std;

void natureNum(int num)
{
    if(num == 0)
    {
        cout<<"Neutral";
    }
    else if(num > 0)
    {
        cout<<"Positive";
    }
    else
    {
        cout<<"Negative";
    }

}

int main(){
    int num;
    cout<<"Num :";
    cin>>num;
    natureNum(num);
    return 0;
}
