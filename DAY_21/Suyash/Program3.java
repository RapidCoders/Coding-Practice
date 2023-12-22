/*
	Q.3 Write a program to print given pattern.
	Input : num = 7
	Output : 
	
	                 *
	               * * *
	             * * * * *
	           * * * * * * *
	             * * * * *
	               * * *
	                 *
	
	Author: Shreyash
*/

import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of diamond");
		int size = sobj.nextInt();
		
		PrintPattern pobj = new PrintPattern();
		pobj.Pattern(size);
		
		sobj.close();
	}
}
class PrintPattern
{
	public void Pattern(int num)
	{
		if(num%2==0)
		{
			System.out.println("Enter odd size");
		}
		else
		{
			//Print upper pyramid
			for(int i=1; i<=num; i=i+2)
			{
				//Print space
				for(int j=0; j<(num-i)/2; j++)
				{
					System.out.print("  ");
				}
				
				//Print '*'
				for(int j=0; j<i; j++)
				{
					System.out.print("* ");
				}
				System.out.println();
			}
			
			//Print lower pyramid
			for(int i=num-2; i>=1; i=i-2)
			{
				//Print space
				for(int j=0; j<(num-i)/2; j++)
				{
					System.out.print("  ");
				}
				
				//Print '*'
				for(int j=0; j<i; j++)
				{
					System.out.print("* ");
				}
				System.out.println();
			}
		}
	}
}
