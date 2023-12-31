

#include<iostream>
using namespace std;

void trans(int mat1[3][3], const int row, const int col)
{
	int mat_new[3][3];
	for(int j = 0;j<col;j++){
		for(int i = 0;i<row;i++){
			mat_new[i][j] = mat1[i][j];
		}
	}
	for(int j = 0;j<col;j++){
		for(int i = 0;i<row;i++){
			cout<<mat_new[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
    int const row = 3;
    int const col = 3;
    int mat1[row][col];
    cout<<"Enter Data of Matrix One :";
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            cin>>mat1[i][j];
        }
    }
    trans(mat1, row, col);
    

    return 0;
}
