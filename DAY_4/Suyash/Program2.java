/*
Q2. Write a program which accept range from user and return addition of all even
numbers in between that range. (Range should contains positive numbers only)

Input : 23 30
Output : 108

Input : -10 2
Output : Invalid range

Input : 90 18
Output : Invalid range
Author: Suyash
*/

import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter starting range");
		int iStart = sobj.nextInt();
		System.out.println("Enter ending range");
		int iEnd = sobj.nextInt();
		
		EvenRange eobj = new EvenRange();
		int iRes = eobj.Range(iStart,iEnd);
		if(iRes == -1)
		{
			System.out.println("Invalid range");
		}
		else
		{
			System.out.println("Addition is : "+iRes);
		}
	}
}

class EvenRange
{
	public int Range(int start, int end)
	{
		int add = 0;
		
		if((start > end)||(start < 0))
		{
			return -1;
		}
		for(int i=start; i<=end; i++)
		{
			if(i%2 == 0)
			{
				add = add + i;
			}
		}
		return add;
	}
}
