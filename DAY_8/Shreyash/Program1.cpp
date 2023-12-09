#include<iostream>
using namespace std;
void patt(int rows,int column)
{
    for(int i =1;i<=rows;i++){
        for(int j=column;j>=1;j--){
            if(i==1||j==1||j==column||i==rows){
                cout<<"*  ";
            }
            else if(i == 2||j==2||i ==rows-1||j==column-1 ){
                cout<<"#  ";
            }
            else if(i == 3||j==3||i ==rows-2||j==column-2 ){
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
 

