/*
Q1. Write a program which accept rows and numbers of column from user and display below pattern.
Input : row = 3, col = 5
Output :
5   4   3   2   1
5   4   3   2   1
5   4   3   2   1
Author: Vaibhav
*/

import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number of rows");
		int iRow = sobj.nextInt();
		System.out.println("Enter number of columns");
		int iCol = sobj.nextInt();
		
		PatternPrinting pobj = new PatternPrinting();
		pobj.Pattern(iRow, iCol);
		
		sobj.close();
	}
}

class PatternPrinting
{
	public void Pattern(int row, int col)
	{
		for(int i=1; i<=row; i++)
		{
			for(int j=col; j>=1; j--)
			{
				System.out.print(j+" ");
			}
			System.out.println();
		}
	}
}
