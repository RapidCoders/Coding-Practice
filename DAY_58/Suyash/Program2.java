/*
	Q.2 Program to determine whether a given matrix is a sparse matrix
	Input:
	Matrix a = [4, 0, 0]  
	           [0, 5, 0]  
	           [0, 0, 6]  
	Output:
	Given matrix is a sparse matrix
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number of rows");
		int rows = sobj.nextInt();
		System.out.println("Enter number of columns");
		int columns = sobj.nextInt();
		
		int arr[][] = new int[rows][columns];
		System.out.println("Enter the elements");
		for(int i=0; i<rows; i++)
		{
			for(int j=0; j<columns; j++)
			{
				arr[i][j] = sobj.nextInt();
			}
		}
		
		SparseMatrix obj = new SparseMatrix();
		if(obj.ChkSparse(arr, rows, columns))
			System.out.println("Given matrix is a sparse matrix");
		else
			System.out.println("Given matrix is not a sparse matrix");
		
		sobj.close();
	}
}

class SparseMatrix
{
	public boolean ChkSparse(int arr[][], int rows, int cols)
	{
		int count = 0;
		int size = rows * cols;  
         
        for(int i = 0; i < rows; i++)
        {  
            for(int j = 0; j < cols; j++)
            {  
                if(arr[i][j] == 0)  
                    count++;  
            }  
        }  
              
        if(count > (size/2))  
            return true;
       
        return false;
	}
}
