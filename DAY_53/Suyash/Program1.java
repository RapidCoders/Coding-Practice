/*
	Q.1 Write a function that takes a character as input and prints a below pattern.
	Input: 4
	Output:
	      4
	    4 3
	  4 3 2
	4 3 2 1
	
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
		pobj.PrintPattern(n);;
		
		sobj.close();
	}
}

class PatternPrinting
{
	public void PrintPattern(int n)
	{
		int i, j, k;

	    for (i = 1; i <= n; i++)
	    {
	        for (j = 1; j <= n - i; j++)
	        {
	            System.out.print("  ");
	        }

	        for (k = n; k >= j; k--)
	        {
	            System.out.print(k+" ");
	        }
	        System.out.println();
	    }
	}
}
