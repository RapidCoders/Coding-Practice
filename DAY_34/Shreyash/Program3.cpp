#include<iostream>
using namespace std;

int equalornot(int mat1[3][3],int mat2[3][3],int const row,int const col)
{
    int count = 0;
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j < col;j++)
        {
            if(mat1[i][j] == mat2[i][j])
            {
                count++;
            }
        }
        
    }
    if(count == (row*col))
    {
        return 0;
    }

    return -1;
    

}

int main()
{
    int const row = 3;
    int const col = 3;
    int mat1[3][3];
    int mat2[3][3];
    cout<<"Enter Data In First Matrix: ";
    for(int i = 0;i<row;i++){
        for(int j = 0;j < col;j++){
            cin>>mat1[i][j];
        }
        
    }
    cout<<"Enter Data In Second Matrix: ";
    for(int i = 0;i<row;i++){
        for(int j = 0;j < col;j++){
            cin>>mat2[i][j];
        }
        
    }
    int result = equalornot(mat1,mat2,row,col);

    
    if(result == 0)
    {
        cout<<"True";
    }else{
        cout<<"False";
    }
    
    return 0;
}
