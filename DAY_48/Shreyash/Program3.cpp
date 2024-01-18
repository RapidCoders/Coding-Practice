#include<iostream>
#include<vector>
using namespace std;

void patt(int n)
{
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i == j || j == 1||i+j == n+1||j == n){
                cout<<"*";
            }else{
                cout<<" ";
            }
            
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
