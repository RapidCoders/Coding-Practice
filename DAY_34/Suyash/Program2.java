/*
	Q.2 Program to Print Matrix in Z Form.
	Explanation: The Z form includes the elements of the first row, right diagonal, and the last row of the matrix. 
				 To print the Z form of the matrix, the rows and columns must be the same.
	
	Input : {5 9 1}
	        {3 6 7}
	        {4 8 0}
	
	Output : 5 9 1
	           6
	         4 8 0 
	         
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
		
		PrintMatrix pobj = new PrintMatrix();
		pobj.Print(rows, columns, matrix);
		
		sobj.close();
	}
}

class PrintMatrix
{
	public void Print(int rows, int columns, int matrix[][]) 
	{
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
					if(i==0 || i==rows-1 || i==j)
					{
						System.out.print(matrix[i][j]+" ");
					}
					else
					{
						System.out.print("  ");
					}
				}
				System.out.println();
			}
		}
	}
}
