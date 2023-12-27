/*
	Q.2 Program to determine whether a given matrix is an identity matrix.
	
	Explanation : A matrix is said to be the identity matrix if it is the square matrix in which elements of principle diagonal are ones,
	              and the rest of the elements are zeroes.
	Input:
	Matrix a =[1, 0, 0]  
	          [0, 1, 0]  
	          [0, 0, 1]  
	
	Output: Given matrix is an identity matrix
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Number of rows and columns");
		int rows = sobj.nextInt();
		int columns = sobj.nextInt();
		
		int matrix[][] = new int[rows][columns];
		System.out.println("Enter elements of Matrix");
		for(int i=0; i<rows; i++)
		{
			for(int j=0; j<columns; j++)
			{
				matrix[i][j] = sobj.nextInt();
			}
		}
		
		IdentityMatrix iobj = new IdentityMatrix();
		boolean bRet = iobj.ChckMatric(matrix, rows, columns);
		if(bRet == true)
		{
			System.out.println("Given matrix is Identity matric");
		}
		else
		{
			System.out.println("Given matrix is not Identity matrix");
		}
		
		sobj.close();
	}
}

class IdentityMatrix
{
	public boolean ChckMatric(int matrix[][],int rows, int columns)
	{
		boolean flag = true;
		
		if(rows != columns)
		{
			System.out.println("Number of rows and columns should be same");
		}
		else
		{
			for(int i=0; i<rows; i++)
			{
				for(int j=0; j<columns; j++)
				{
					if(i==j && matrix[i][j] != 1)
					{
						flag = false;
						break;
					}
					if(i!=j && matrix[i][j] != 0)
					{
						flag = false;
						break;
					}
				}
			}
		}
		
		return flag;
	}
}
