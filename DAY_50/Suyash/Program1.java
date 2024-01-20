/*
	Q.1 Write a program that takes an integer n as input and prints a pattern based on the following rules:
	a) The pattern contains n rows.
	b) In each row, print the numbers from 1 to the row number.
	c) Repeat the numbers in reverse order after reaching the row number.
	
	Input: 4
	
	Output:
	1
	1 2 1
	1 2 3 2 1
	1 2 3 4 3 2 1
	
	Author: Vaibhav
*/

import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int n = sobj.nextInt();
		
		PatternPrinting pobj = new PatternPrinting();
		pobj.Pattern(n);
		
		sobj.close();
	}
}

class PatternPrinting
{
	public void Pattern(int n)
	{
		int x = 0;
		for(int i=1; i<=n; i++)
		{
			x = 0;
			for(int j=1; j<=i+i-1; j++)
			{
				if(j > i)
				{
					System.out.print(--x+" ");
				}
				else
				{
					System.out.print(++x+" ");
				}
			}
			System.out.println(" ");
		}
	}
}
