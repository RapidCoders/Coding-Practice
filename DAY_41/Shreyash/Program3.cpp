#include<iostream>
#include<cmath>
using namespace std;

void patt(int row)
{
    int i , j , count;
    count = 0;            
    for(i=0;i<row;i++)                                   
    {
        for(j=0;j<=i;j++)                              
        {
            count++;                                     
            if(j!=0)                                      
            cout<<"*"<<count;                          
            else                                          
            cout<<count;                           
        }
        cout<<endl;                                   
    }

}

int main()
{
    int a;
    cin>>a;
    patt(a);
    return 0;
}
