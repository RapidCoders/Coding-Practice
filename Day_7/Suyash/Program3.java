/*
	Q3. Write a Program for Printing Incrementing Number Square Pattern.
	Input : row = 4, col = 6
	Output:
	
	1 1 1 1 1 1 
	2 2 2 2 2 2
	3 3 3 3 3 3
	4 4 4 4 4 4
	
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
				for(int j=1; j<=col; j++)
				{
					System.out.print(i+" ");
				}
				System.out.println();
			}
		}
	}
}
