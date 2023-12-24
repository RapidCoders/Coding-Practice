/*
	Q.2 Write program which to print the below pattern.
	Input: 8
	Output:
	        1           1 
	          2       2
	            3   3
	              4
	            3   3
	          2       2
	        1           1
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int num = sobj.nextInt();
		
		PatternPrinting1 pobj = new PatternPrinting1();
		pobj.Pattern(num);
		
		sobj.close();
	}
}

class PatternPrinting1
{
	public void Pattern(int num)
	{
		for(int i=1; i<=num/2; i++)
		{
			for(int j=1; j<num; j++)
			{
				if(i==j || (i+j)==num)
				{
					System.out.print(i+"  ");
				}
				else
				{
					System.out.print("  ");
				}
			}
			System.out.println();
		}
		
		for(int i=(num/2)-1; i>=1; i--)
		{
			for(int j=num-1; j>=1; j--)
			{
				if(i==j || (i+j)==num)
				{
					System.out.print(i+"  ");
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
