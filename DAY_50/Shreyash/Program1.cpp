#include<iostream>
using namespace std;

void patt(int num)
{
    for(int i = 1;i<=num;i++){
        for(int j =1;j<=i;j++){
            cout<<" "<<j;
        }
        for(int k = i-1;k>=1;k--){
            cout<<" "<<k;
        }
        cout<<endl;
    }
}

int main()
{
    int num;
    cout<<"n :";
    cin>>num;
    patt(num);
    return 0;
}
