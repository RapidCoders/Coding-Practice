#include<iostream>
using namespace std;

bool prime_or_not(int num){
    if(num == 0||num == 1){
        return false;
    }
    for(int i = 2;i<num;i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;

}

int main()
{
    int num;
    cin>>num;
    for(int i = 1;i<=(num*2)+1;i++)
    {
        if(prime_or_not(i))
        {
            cout<<i<<" ";

        }
    }
    return 0;
}
