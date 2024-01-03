// Q.2 Write a method to determine and return whether a given matrix is a sparse matrix.
// Explanation: A matrix is said to be sparse matrix if most of the elements of that matrix are 0. It implies that it contains very less non-zero elements. To check whether the given matrix is the sparse matrix or not, we first count the number of zero elements present in the matrix. Then calculate the size of the matrix. For the matrix to be sparse, count of zero elements present in an array must be greater than size/2.

// Given Matrix : {4  0  0}
//                {0  5  0}
//                {0  0  6}

// Number of zeroes present in above matrix is 6 and size of the matrix is 3 * 3 = 9.
// Since, 6 > 4.5 that means, most elements of given array are zero.
// Hence, the above matrix is a sparse matrix.
// Author: Suyash

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
