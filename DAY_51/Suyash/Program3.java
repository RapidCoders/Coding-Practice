/*
	Q.3 Write a program that takes an integer n as input and prints a pattern.
	Input: n = 4
	Output:
	1
	4*5*6
	2*3
	7*8*9*10
	
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
		pobj.PrintPattern(n);;
		
		sobj.close();
	}
}

class PatternPrinting
{
	public void PrintPattern(int num)
	{
		int count = 0;
	    int count1 = 3;
	    for (int i=0;i<num/2;i++) 
	    {
	        for (int j=0;j<=i;j++)
	        {
	            count++;
	            if (j!=0)
	            {
	                System.out.print("*"+count);
	            }
	            else
	            {
	                System.out.print(count);
	            }
	        }
	        System.out.println();
	        for (int j=0;j<=i+2;j++)
	        {
	            count1++;
	            if (j!=0)
	            {
	            	System.out.print("*"+count1);
	            }
	            else
	            {
	            	System.out.print(count1);
	            }
	        }
	        System.out.println();
	    }
	}
}
