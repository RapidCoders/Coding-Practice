// Q.1 Write a program which accept rows and numbers of column from user and display below pattern.
// Input : row = 7, col = 7
// Output :
//                   *
//                *  *
//             *  *  *
//          *  *  *  *
//       *  *  *  *  *
//    *  *  *  *  *  *
// *  *  *  *  *  *  *
// Author: Vaibhav


#include<iostream>
using namespace std;
void patt(int rows)
{
    for(int i =1;i<=rows;i++)
    {
        for(int j=rows;j>=1;j--)
        {
            
            if(j == i)
            {
                for(int k = 1;k<=j;k++)
                {
                    cout<<"*";
                }
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
    int rows;
    cin>>rows;
    patt(rows);

}
 

