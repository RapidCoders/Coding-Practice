#include<iostream>
using namespace std;
void patt(int rows,int column)
{
    for(int i = rows;i>=1;i--){
        for(int j=1;j<=column;j++){
            if(i==1||j==1||j==column||i==rows||i==j){
                cout<<"*  ";
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
