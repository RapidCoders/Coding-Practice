/*
Q2. Write a program to print given pattern
*
*  *
*  *  *
*  *  *  *
*  *  *  *  *
Author: Suyash
*/

public class Q2_PatternPrinting 
{
	public static void main(String[] args) 
	{
		for(int i=1; i<=5; i++)
		{
			for(int j=1; j<=5; j++)
			{
				if((i==j)||(i>j))
				{
					System.out.print("* ");
				}
			}
			System.out.println();
		}
	}
}
