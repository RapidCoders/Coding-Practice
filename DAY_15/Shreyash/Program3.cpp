
#include <iostream>

using namespace std;

void patt(int row){
    for(int i = 1;i<=row;i++){
        for(int j = row;j>=i;j--){
            if(i==j||i+j==row+1){
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
   
    int row,col;
    cin>>row;
    cin>>col;
    if(row == col){
        patt(row);
        
    }else{
        cout<<"Invalid Input";
    }
    return 0;
}
