
/*
	Q.1 Write a program which accept number of rows and numbers of column from user and display below pattern.
	Input : 5  5
	Output :
	
	*
	*  *
	*  *  *
	*  *  *  *
	*  *  *  *  *
	*  *  *  *  *  *
	*  *  *  *  *
	*  *  *  *
	*  *  *
	*  *
	*
	
	Author: Vaibhav
*/

import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number of rows");
		int row = sobj.nextInt();
		System.out.println("Enter number of columns");
		int col = sobj.nextInt();
		
		PatternPrinting pobj = new PatternPrinting();
		pobj.Pattern(row, col);
		
		sobj.close();
	}
}

class PatternPrinting
{
	public void Pattern(int row, int col)
	{
		for(int i=1; i<=row; i++)
		{
			for(int j=1; j<=col; j++)
			{
				if(j==1 || i==row || i==j ||i>j)
				{
					System.out.print("* ");
				}
			}
			System.out.println();
		}
		for(int i=1; i<=row; i++)
		{
			for(int j=col-1; j>=1; j--)
			{
				if(j==row || i==1 || i==j ||i<j)
				{
					System.out.print("* ");
				}
			}
			System.out.println();
		}
	}
}
