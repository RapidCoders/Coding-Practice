/*
	Q.1 Write a program to determine if a given matrix is symmetric. 
		A matrix is symmetric if it is equal to its transpose.
		
	Input:  [1, 2, 3]
	        [2, 4, 5]
	        [3, 5, 6]
	Output: True.
	
	Input:  [1, 2, 3]
	        [2, 4, 5]
	        [3, 5, 6]
	        [4, 8, 9]
	Output: False.
	
	Input:  [1, 2, 3]
	        [2, 1, 0]
	        [3, 0, 1]
	Output: True.
	
	Input:  [1, 2, 3]
	        [4, 5, 6]
	        [7, 8, 9]
	Output: False.
	
	Author: Vaibhav
*/
import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of rows and columns");
		int rows = sobj.nextInt();
		int columns = sobj.nextInt();
		
		int matrix[][] = new int[rows][columns];
		
		System.out.println("Enter the elements");
		for(int i=0; i<rows; i++)
		{
			for(int j=0; j<columns; j++)
			{
				matrix[i][j] = sobj.nextInt();
			}
		}
		
		SymmetricMatrix obj = new SymmetricMatrix();
		boolean bRet = obj.ChkSymmetric(rows, columns, matrix);
		if(bRet == true)
		{
			System.out.println("It is a Symmetric Matrix");
		}
		else
		{
			System.out.println("It is not a Symmetric Matrix");
		}
		
		sobj.close();
	}
}

class SymmetricMatrix
{
	public boolean ChkSymmetric(int rows, int columns, int matrix[][])
	{
		boolean flag = false;
		
		int transpose[][] = new int[rows][columns];
		
		for(int i=0; i<rows; i++)
		{
			for(int j=0; j<columns; j++)
			{
				transpose[i][j] = matrix[j][i];
			}
		}
		
		for(int i=0; i<rows; i++)
		{
			for(int j=0; j<columns; j++)
			{
				if(transpose[i][j] != matrix[i][j])
				{
					flag = false;
					break;
				}
			}
		}
		
		flag = true;
		
		return flag;
	}
}
