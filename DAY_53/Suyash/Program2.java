/*
	Q.2 Write a program to print following pattern.
	Input : 5
	Output :
	1 1 1 1 1
	1       1
	1   1   1
	1       1
	1 1 1 1 1
	
	Author: Suyash
*/

import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int n = sobj.nextInt();
		
		PatternPrinting1 pobj1 = new PatternPrinting1();
		pobj1.PrintPattern(n);;
		
		sobj.close();
	}
}

class PatternPrinting1
{
	public void PrintPattern(int n)
	{
		 for (int i = 1; i <= n; i++)   
		 {   
			 for (int j = 1; j <= n; j++)   
		     {   
				 if (i==1 || i==n || j==1 || j==n || (i==(n+1)/2 && j==(n+1)/2))  
				 {
					 System.out.print(" 1");   
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
