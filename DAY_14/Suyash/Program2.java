/*
	Q.2 Write a program to print given pattern.
	
	Input : 5
	Output :
	A
	A B
	A B C
	A B C D
	A B C D E
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number of rows");
		int row = sobj.nextInt();
		
		PatternPrinting pobj = new PatternPrinting();
		pobj.Pattern(row);
		
		sobj.close();
	}
}

class PatternPrinting
{
	public void Pattern(int row)
	{	
		for(int i=1; i<=row; i++)
		{
			char ch = 'A';
			for(int j=1; j<=i; j++,ch++)
			{
				System.out.print(ch+" ");
			}
			System.out.println();
		}
	}
}
