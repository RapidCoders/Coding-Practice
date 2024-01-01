/*
Q.1 Write a program that prints swastika pattern.
Input: 7
Output:
*     * * * *
*     *
*     *
* * * * * * * 
      *     *
      *     *
* * * *     *

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
		
		SwastikaPattern pobj = new SwastikaPattern();
		pobj.Pattern(rows, columns);
		
		sobj.close();
	}
}

class SwastikaPattern
{
	public void Pattern(int rows, int columns)
	{
		if(rows != columns)
		{
			System.out.println("Number of rows and columns should be same");
		}
		else
		{
			for(int i=0; i<=rows-1; i++)
			{
				for(int j=0; j<=columns-1; j++)
				{
					if(i < rows/2)
					{
						if(j < columns/2)
						{
							if(j==0)
								System.out.print("* ");
							else
								System.out.print(" "+" ");
						}
					
						else if(j == columns/2)
							System.out.print("*");
					
						else
						{
							if(i==0)
								System.out.print(" *");
						}
					}
					else if(i == rows/2)
						System.out.print("* ");
					
					else
					{
						if(j == columns/2 || j == columns-1)
							System.out.print("* ");
						
						else if(i == rows-1)
						{
							if(j<=columns/2 || j==columns-1)
								System.out.print("* ");
							else
								System.out.print(" "+" ");
						}
						else
							System.out.print(" "+" ");
					}	
				}
				System.out.println();
			}
		}
	}	
}
