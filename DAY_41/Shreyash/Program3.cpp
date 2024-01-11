
// Q.3 write program to Print Number Star Right Triangle Pattern.
// Input: n = 4
// Output:

//          1
//          3*2
//          6*5*4
//          10*9*8*7

// Input: n = 5
// Output:
//          1
//          3*2
//          6*5*4
//          10*9*8*7
//          15*14*13*12*11
// Author: Shreyash


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
