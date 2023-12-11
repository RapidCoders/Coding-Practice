#include<iostream>
using namespace std;
void patt(int rows,int cols)
{
    if(rows != cols){
        cout<<"invalid input! Enter numbers of rows and columns same.";
    }
    else{
        for(int i =1;i<=rows;i++){
        
        for(int j=rows;j>=1;j--){
            
            if(j == i){
                for(int k = 1;k<=j;k++){
                    cout<<"* ";
                }
            }
            else{
                cout<<" ";
            }
           

        }
        cout<<endl;
    }

    }
}

int main()
{
    int rows;
    cout<<"Enter Rows :";
    cin>>rows;
    cout<<"Enter Columns :";
    int cols;
    cin>>cols;
    patt(rows,cols);

}
 
