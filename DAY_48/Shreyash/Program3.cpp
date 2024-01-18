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


// OR
#include<iostream>
#include<vector>
using namespace std;
#include <iostream>

void patt(int n)
{
    int i, j;
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n*2; j++) {
            if (j <= i || j >= (n*2+1) - i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout <<endl;
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n*2; j++) {
            if (j <= (n+1) - i || j >= n + i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout <<endl;
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
