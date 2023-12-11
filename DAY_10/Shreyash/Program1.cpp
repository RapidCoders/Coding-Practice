#include<iostream>
using namespace std;

void patt(int row,int col)
{
    if(row!=col)
    {
        cout<<"Invalid Output";
    }
    else{
        for(int i = 1;i<=row;i++)
    {
        for(int j = 1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int k = row-1;k>=1;k--)
    {
        for(int x = 1;x<=k;x++){
            cout<<"* ";
        }
        cout<<endl;
    }
    }
}

int main()
{
    int row;
    cout<<"Enter rows :";
    cin>>row;
    int col;
    cout<<"Enter rows :";
    cin>>col;
    cout<<endl;
    patt(row,col);
    return 0;

}
