/*
	Q.3 Write program which to print the below pattern.
	
	Input: 4
	
	Output:
	* * * *
	
	  * * * *
	
	    * * * *
	
	      * * * *
	     
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number of rows");
		int rows = sobj.nextInt();
		
		PatternPrinting pobj = new PatternPrinting();
		pobj.Printing(rows);
		
		sobj.close();
	}
}

class PatternPrinting 
{
	public void Printing(int rows)
	{
		for(int i=1; i<=rows; i++)
		{
			for(int j=1; j<=i; j++)
			{
				System.out.print(" ");
			}
			for(int k=1; k<=rows; k++)
			{
				System.out.print("* ");
			}
			System.out.println();
		}
	}
}
