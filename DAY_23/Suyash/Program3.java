/*
	Q.3 Write a program to print given pattern.
	Input : 7
	Output :
	           1
	           2*2
	           3*3*3
	           4*4*4*4
	           3*3*3
	           2*2
	           1
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int size = sobj.nextInt();
		
		PatternPrinting pobj = new PatternPrinting();
		pobj.Pattern(size);
		
		sobj.close();
	}
}

class PatternPrinting
{
	public void Pattern(int size)
	{
		for(int i=1; i<=size/2+1; i++)
		{
			for(int j=1; j<=i; j++)
			{
				if(i==j)
				{
					System.out.print(i);
				}
				else
				{
					System.out.print(i+"*");
				}
			}
			System.out.println();
		}
		
		for(int i=size/2; i>=1; i--)
		{
			for(int j=1; j<=i; j++)
			{
				if(i==j)
				{
					System.out.print(i);
				}
				else
				{
					System.out.print(i+"*");
				}
			}
			System.out.println();
		}
	}
}
