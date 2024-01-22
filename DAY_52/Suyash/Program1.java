/*
	Q.1 Write a function that takes a character as input and prints a below pattern.
	Input: A, 5
	Output:
	    A
	   A A
	  A A A
	 A A A A
	A A A A A
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
		System.out.println("Enter a character");
		char c = sobj.next().charAt(0);
		
		PatternPrinting pobj = new PatternPrinting();
		pobj.PrintPattern(n,c);;
		
		sobj.close();
	}
}

class PatternPrinting
{
	public void PrintPattern(int n, char c)
	{
	    int i, j;

	    for (i = 1; i <= n; i++)
	    {
	        for (j = n; j >= 1; j--)
	        {
	            if (j <= i)
	                System.out.print(c+" ");
	            else
	                System.out.print(" ");
	        }
	       System.out.println();
	    }
	}
}
