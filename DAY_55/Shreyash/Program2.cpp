#include<iostream>
using namespace std;

bool deficientornot(int num)
{
    int sum = 0;
    for(int i = 1;i<num;i++){
        if(num%i == 0){
            sum = sum + i;
        }
    }
    // cout<<sum;
    if(sum < num){
        return true;
    }
    return false;
}    
int main()
{
    int num;
    cout<<"Num :";
    cin>>num;
    if(deficientornot(num))
    {
        cout<<"Deficient";
    }
    else
    {
        cout<<"Not deficient";
    }
    return 0;
}
