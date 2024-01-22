/*
	Q.3 Write a program that takes an integer n as input and 
	prints a Number Star Square Pattern.
	Input: n = 4
	Output:
	1*2*3*4
	9*10*11*12
	5*6*7*8
	13*14*15*16
	
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
		
		PatternPrinting2 pobj2 = new PatternPrinting2();
		pobj2.PrintPattern(n);;
		
		sobj.close();
	}
}

class PatternPrinting2
{
	public void PrintPattern(int num)
	{
		int count = 0;
	    int count1 = 8;
	    for (int i = 0; i < num/2; i++) 
	    {
	        for (int j = 0; j < num; j++)
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
	        for (int j = 0; j < num; j++)
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
