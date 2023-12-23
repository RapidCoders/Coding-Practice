// Q.2 Write program which accept number and gives average of that many prime numbers .
// Example : 
// Input : Number = 5
// [Prime numbers : 2,3,5,7,11]
// Output : 28

// Input : Number = 7
// [Prime numbers : 2,3,5,7,11,13,17]
// Output : 58
// Author: Suyash
    
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
