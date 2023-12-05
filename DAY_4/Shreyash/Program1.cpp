#include<iostream>
using namespace std;


int patt(int row,int col)
{
    for(int i= 1;i<=row;i++){
        for(int j=col;j!=0;j--){
        cout<<j<<" ";
    }
    cout<<endl;
    }

    return 0;
}

int main()
{

    int row;
    int col;
    cout<<"number of row :";
    cin>>row;
    cout<<"number of Column :";
    cin>>col;
    cout<<patt(row,col);
    
    return 0;
}
