#include<iostream>
#include<vector>
using namespace std;

bool even_odd(int mat[3][3],int row)
{
    float count;
    float cal = (row*row)/2;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<row;j++){
            if(mat[i][j] == 0){
                count++;
            }
        }
    }
    cout<<count<<" "<<cal;

    if(count > cal){
        return true;
    }
    return false;
    
    
}

int main()
{
    int mat[3][3];
    int row;
    cout<<"Row :";
    cin>>row;
    int col;
    cout<<"column :";
    cin>>col;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cin>>mat[i][j];
        }
    }

    if(even_odd(mat,row)){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}
