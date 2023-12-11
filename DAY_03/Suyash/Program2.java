/*
Q2. Write a program which accept one number from user and print that number of even numbers on screen.

Input : 7
Output: 2 4 6 8 10 12 14

Author: Suyash
*/

import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int iNo = sobj.nextInt();
		
		NEvenNo eobj = new NEvenNo();
		eobj.CalcEven(iNo);
	}
}

class NEvenNo
{
	public void CalcEven(int iNo)
	{
		int iNum = iNo*2;
		
		for(int i=1; i<=iNum; i++)
		{
			if(i%2 == 0)
			{
				System.out.print(i+" ");
			}
		}
	}
}
