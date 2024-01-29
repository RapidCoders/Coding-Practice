/*
	Q.3 Write a program to print given Pattern.
	Input: num = 4
	Output:
	 *  *  *  *  *  *  *
	    *           *
	       *     *
	          *
	          
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int n = sobj.nextInt();
		
		PatternPrinting pobj = new PatternPrinting();
		pobj.Printing(n);
		
		sobj.close();
	}
}


class PatternPrinting
{
	public void Printing(int row)
	{
		for (int i = row; i > 0; i--) 
		  {
		        for (int k = row; k > i; k--) 
		        {
		            System.out.print("   ");
		        }
		        for (int j = 0; j < i * 2 - 1; j++) 
		        {
		            if (i == row) 
		            {
		               System.out.print(" * ");
		            } 
		            else 
		            {
		                if (j == 0 || j == i * 2 - 2) 
		                {
		                	System.out.print(" * ");
		                } 
		                else 
		                {
		                	System.out.print("   ");
		                }
		            }
		        }
		        System.out.println();
		    }
	}
}
