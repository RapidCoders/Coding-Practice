#include<iostream>
using namespace std;

void patt(int num){
    for(int i = 1;i<=num;i++)
    {
        for(int j = 1;j<=num;j++)
        {
            if(i+j == num+1){
                cout<<num;
            }
            else if(i+j == num+2){
                cout<<num-1;
            }
            else if(i+j == num+3){
                cout<<num-2;
            }
            else if(i+j == num+4){
                cout<<num-3;
            }
            else if(i+j == num*2){
                cout<<num-(num-1);
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;

    }
    
    
    
}    
int main()
{
    int num;
    cout<<"Num :";
    cin>>num;
    patt(num);
    return 0;
}
