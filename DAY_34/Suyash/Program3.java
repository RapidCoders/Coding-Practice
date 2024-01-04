/*
	Q.3 Program to determine whether two matrices are equal.
	Input:  
	         a[][] = {       
	                        {1, 2, 3},    
	                        {8, 4, 6},    
	                        {4, 5, 7}    
	                  };
	                  
	        
	         b[][] = {       
	                        {1, 2, 3},    
	                        {8, 4, 6},    
	                        {4, 5, 7}    
	                  };   
	Output: True.
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number of rows");
		int rows1 = sobj.nextInt();
		System.out.println("Enter number of columns");
		int columns1 = sobj.nextInt();
		
		int matrix1[][] = new int[rows1][columns1];
		
		System.out.println("Enter elements of matrix");
		for(int i=0; i<rows1; i++)
		{
			for(int j=0; j<columns1; j++)
			{
				matrix1[i][j] = sobj.nextInt();
			}
		}
		
		System.out.println("Enter number of rows");
		int rows2 = sobj.nextInt();
		System.out.println("Enter number of columns");
		int columns2 = sobj.nextInt();
		
		int matrix2[][] = new int[rows2][columns2];
		
		System.out.println("Enter elements of matrix");
		for(int i=0; i<rows2; i++)
		{
			for(int j=0; j<columns2; j++)
			{
				matrix2[i][j] = sobj.nextInt();
			}
		}
		
		ChkEqualMatrix cobj = new ChkEqualMatrix();
		boolean bRet = cobj.ChkEquality(rows1, columns1, matrix1, matrix2);
		if(bRet == false)
		{
			System.out.println("Matrices are not equal");
		}
		else
		{
			System.out.println("Matrices are equal");
		}
		
		sobj.close();
	}
}
class ChkEqualMatrix
{
	public boolean ChkEquality(int rows, int columns, int matrix1[][], int matrix2[][])
	{
		if(matrix1.length != matrix2.length)
		{
			return false;
		}
		else
		{
			for(int i=0; i<rows; i++)
			{
				for(int j=0; j<columns; j++)
				{
					if(matrix1[i][j] != matrix2[i][j])
					{
						return false;
					}
				}
			}
		}
		return true;
	}
}
