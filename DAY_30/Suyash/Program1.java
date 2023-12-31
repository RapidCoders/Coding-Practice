/*
	Q.1 Write a program that takes a matrix (2D array) as input and returns its transpose.
	Input: row = 3, col = 3
	Input:
	    1 2 3
	    4 5 6
	    7 8 9
	
	Output:
	    1 4 7
	    2 5 8
	    3 6 9
	
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
		
		System.out.println("Enter the elements of Matrix");
		for(int i=0; i<rows; i++)
		{
			for(int j=0; j<columns; j++)
			{
				matrix[i][j] = sobj.nextInt();
			}
		}
		
		TransposeMtrix tobj = new TransposeMtrix();
		int transpose[][]=tobj.Transpose(rows,columns,matrix);
		System.out.println("Matrix after transpose :");
		for(int i=0; i<rows; i++)
		{
			for(int j=0; j<columns; j++)
			{
				System.out.print(transpose[i][j]+" ");
			}
			System.out.println();
		}
		
		sobj.close();
	}
}

class TransposeMtrix
{
	public int[][] Transpose(int rows, int columns, int matrix[][])
	{
		int transpose[][] = new int[rows][columns];
		
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
					transpose[i][j] = matrix[j][i];
				}
			}
		}
		
		return transpose;
	}
}
