
// Q.3 Write a program which accept rows and numbers of column from user and display below pattern.
// Input : row = 4, col = 4
// Output :
// *  *  *  *  
// *  #  #  *  
// *  #  #  *  
// *  *  *  *  
// Input : row = 6, col = 6
// Output :
// *  *  *  *  *  *  
// *  #  #  #  #  *  
// *  #  +  +  #  *  
// *  #  +  +  #  *  
// *  #  #  #  #  *  
// *  *  *  *  *  * 
// Input : row = 8, col = 8
// Output :
// *  *  *  *  *  *  *  *  
// *  #  #  #  #  #  #  *  
// *  #  +  +  +  +  #  *  
// *  #  +        +  #  *  
// *  #  +        +  #  *  
// *  #  +  +  +  +  #  *  
// *  #  #  #  #  #  #  *  
// *  *  *  *  *  *  *  *  
// Author: Shreyash

#include<iostream>
using namespace std;
void patt(int rows,int column)
{
    for(int i =1;i<=rows;i++)
    {
        for(int j=column;j>=1;j--)
        {
            if(i==1||j==1||j==column||i==rows)
            {
                cout<<"*  ";
            }
            else if(i == 2||j==2||i ==rows-1||j==column-1 )
            {
                cout<<"#  ";
            }
            else if(i == 3||j==3||i ==rows-2||j==column-2 )
            {
                cout<<"+  ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int rows;
    int columns;
    cin>>rows;
    cin>>columns;
    patt(rows,columns);

}
 

