
/*
	Q.2 Program to display all prime numbers from 1 to n
	
	Input: n = 11
	Output: 2 3 5 7 11
	
	Author: Suyash
*/

import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number till you want to find the factors");
		int iNo = sobj.nextInt();
		
		FactorsToN fobj = new FactorsToN();
		fobj.Factors(iNo);
		
		sobj.close();
	}
}

class FactorsToN
{
	public void Factors(int iNo)
	{
		int i,j,count;
		
		if(iNo==0 || iNo==1)
		{
			System.out.println("Enter value greater than 1");
		}
		else
		{
			for(i=2; i<=iNo; i++)
			{
				count = 0;
				
				for(j=i; j>=1; j--)
				{
					if(i%j == 0)
					{
						count = count + 1;
					}
				}
				if(count == 2)
				{
					System.out.print(i+" ");
				}
			}
		}
	}
}
