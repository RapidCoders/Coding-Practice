/*
	Q.3 Write a program to print given pattern.
	Input : row = 7 col = 7
	Output :
	
	*  *  *  *  *  *  *
	*  *           *  *
	*     *     *     *
	*        *        *
	*    *      *     *
	*  *           *  *
	*  *  *  *  *  *  *
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number of rows");
		int row = sobj.nextInt();
		System.out.println("Enter number of columns");
		int col = sobj.nextInt();
		
		PrintingPattern pobj = new PrintingPattern();
		pobj.Pattern(row, col);
		
		sobj.close();
	}
}

class PrintingPattern
{
	public void Pattern(int row, int col)
	{
		if(row != col)
		{
			System.out.println("Number of rows and columns should be same");
		}
		else
		{
			for(int i=1; i<=row; i++)
			{
				for(int j=1; j<=col; j++)
				{
					if(i==1||j==1||i==row||j==col||i==j||i+j==row+1)
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
