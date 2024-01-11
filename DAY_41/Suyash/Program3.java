/*
	Q.3 write program to Print Number Star Right Triangle Pattern.
	Input: n = 4
	Output:
	
	         1
	         3*2
	         6*5*4
	         10*9*8*7
	
	Input: n = 5
	Output:
	         1
	         3*2
	         6*5*4
	         10*9*8*7
	         15*14*13*12*11
	         
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
		
		PatternPrinting pobj = new PatternPrinting();
		pobj.PrintingPattern(row);
		
		sobj.close();
	}
}

class PatternPrinting 
{
	public void PrintingPattern(int row)
	{
		int temp, print = 0;

	    for (int i = 1; i <= row; i++)
	    {
	        print += i;
	        temp = print;
	        for (int j = 1; j <= i; j++)
	        {
	            if (i == j)
	                System.out.print(temp-- +" ");
	            else
	                System.out.print(temp-- +"*");
	        }
	        System.out.println();
	    }
	}
}
