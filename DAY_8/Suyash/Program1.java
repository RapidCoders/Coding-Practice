/*
	Q.1 Write a program which accept rows and numbers of column from user and display below pattern.
	Input : row = 7, col = 7
	Output :
	                  *
	               *  *
	            *  *  *
	         *  *  *  *
	      *  *  *  *  *
	   *  *  *  *  *  *
	*  *  *  *  *  *  *
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
		
		PrintPattern pobj = new PrintPattern();
		pobj.Pattern(row, col);
		
		sobj.close();
	}
}
class PrintPattern
{
	public void Pattern(int row, int col)
	{
		if(row != col)
		{
			System.out.println("Number of rows and columns must be same");
		}
		else
		{
			for(int i=1; i<=row; i++)
			{
				for(int j=col; j>=1; j--)
				{
					if(j==1 || i==col || i==j || i>=j)
					{
						System.out.print("* ");
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
