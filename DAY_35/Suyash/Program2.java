/*
	Q.2 Program to check whether Matrix is Trace Matrix.
	Explanation: The normal of a matrix is the square root of the sum of squares of all the elements of a matrix.
				 For example, consider the following matrix. {9 8 2} {1 4 7} {3 5 6} Normal and Trace of a Matrix 
				 in Java First, we will calculate the sum of the square of each element. 
				 92 + 82 + 22 + 12 + 42 + 72 + 32 + 52 + 62 81 + 64 + 4 + 1 + 16 + 49 + 9 + 25 + 36 = 285 
				 Now, calculate the square root of the sum of squares. √285 = 16.8819430161
	
	The trace of a matrix is the sum of all the elements present in the principal diagonal (upper left to lower right). 
	Note that the matrix must be a square matrix (the number of rows and columns must be the same). It is useful to prove 
	results in linear algebra. For example, consider the following matrix. {(9) 8 2} {1 (4) 7} {3 5 (6)} Normal and Trace 
	of a Matrix in Java Trace for the above matrix is 5 + 4 + 7 = 16.
	
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
		
		TraceMatrix tobj = new TraceMatrix();
		tobj.ChkTraceMatric(rows, columns, matrix);
		
		sobj.close();
	}
}

class TraceMatrix
{
	public void ChkTraceMatric(int rows, int columns, int matrix[][])
	{
		int sum = 0;
		
		for(int i=0; i<rows; i++)
		{
			for(int j=0; j<columns; j++)
			{
				sum = sum +(matrix[i][j]);
			}
		}
		System.out.println("The Trace of given Matrix is : "+sum);

		
		double square = 0, result = 0; 
		for(int i=0; i<rows; i++)
		{
			for(int j=0; j<columns; j++)
			{
				if(i == j)
				{
					square = square + (matrix[i][j])*(matrix[i][j]);
				}
			}
		}
		result = Math.sqrt(square);
		System.out.println("The Normal of given Matrix is : "+result);
	}
}
