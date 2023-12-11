#include<iostream>
using namespace std;

void factors(int num)
{
    for(int i = 1;i<=num;i++)
    {
        for(int j = 1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int k = num-1;k>=1;k--)
    {
        for(int x = 1;x<=k;x++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main()
{
    int num;
    cout<<"Enter Number :";
    cin>>num;
    factors(num);
    return 0;

}
