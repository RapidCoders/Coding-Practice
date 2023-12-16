/*
	Q.2 Write a program to print given pattern.
	
	Input : 5
	Output :
	A
	B C
	D E F
	G H I J
	K L M N O
	
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
		
		PrintingPattern1 pobj = new PrintingPattern1();
		pobj.Pattern(row);
		
		sobj.close();
	}
}
class PrintingPattern1
{
	public void Pattern(int row)
	{	
		char ch = 'A';
		for(int i=1; i<=row; i++)
		{
			for(int j=1; j<=i; j++,ch++)
			{
				System.out.print(ch+" ");
			}
			System.out.println();
		}
	}
}
