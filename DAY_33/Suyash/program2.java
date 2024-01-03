/*
	Q.2 Write a method to determine and return whether a given matrix is a sparse matrix.
	
	Explanation:
	A matrix is said to be sparse matrix if most of the elements of that matrix are 0. It implies that it contains very less non-zero elements.
	To check whether the given matrix is the sparse matrix or not, we first count the number of zero elements present in the matrix. Then
	calculate the size of the matrix. For the matrix to be sparse, count of zero elements present in an array must be greater than size/2.
	
	Given Matrix : {4  0  0}
	               {0  5  0}
	               {0  0  6}
	
	Number of zeroes present in above matrix is 6 and size of the matrix is 3 * 3 = 9. Since, 6 > 4.5 that means, most elements of given array are zero.
	Hence, the above matrix is a sparse matrix.
	
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
		
		int matrix[][] = new int[rows][columns];
		
		System.out.println("Enter elements of matrix");
		for(int i=0; i<rows; i++)
		{
			for(int j=0; j<columns; j++)
			{
				matrix[i][j] = sobj.nextInt();
			}
		}
		
		SparseMatrix obj = new SparseMatrix();
		boolean bRet = obj.ChkSparse(rows, columns, matrix);
		if(bRet == true)
			System.out.println("It is a Sparse matrix");
		else
			System.out.println("It is not a Sparse matrix");
		
		sobj.close();
	}
}

class SparseMatrix
{
	public boolean ChkSparse(int rows, int columns, int matrix[][])
	{
		int count = 0;
		
		int size = rows * columns;
		
		for(int i=0; i<rows; i++)
		{
			for(int j=0; j<columns; j++)
			{
				if(matrix[i][j] == 0)
				{
					count++;
				}
			}
		}
		
		if(count > size/2)
			return true;
		else
			return false;
	}
}
