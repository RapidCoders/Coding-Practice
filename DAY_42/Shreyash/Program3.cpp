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
