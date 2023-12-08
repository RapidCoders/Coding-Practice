#include <iostream>
using namespace std;
void patt(int row,int col){
    if(row <= 0||col <=0){
        cout<<"You have to enter Number greater than 0";
    }
    else{
        for(int i =1;i<=row;i++){
        for(int j = 1;j<=col;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    }

    

}
 
int main(){
    int row ;
    int col ;
    cout<<"Rows :";
    cin>>row;
    cout<<"Columns :";
    cin>>col;
    patt(row,col);

}
