/*
	Q1. Write a program which accept number from the user and check whether it is prime or not.
	Input: 31
	Output: Is is a prime number.
	
	Input: 20
	Output: It is not a prime number.
	
	Author: Vaibhav
*/

import java. util.Scanner;

public class PrimeNumber 
{
	public static void main(String args[])
	{
		int iNo = 0;

		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter number you want to check whether it is prime or not");
		iNo = sobj.nextInt();

		CheckPrime cp = new CheckPrime();
		cp.PrimeNumber(iNo);
		
		sobj.close();	}
}

class CheckPrime
{
	public void PrimeNumber(int iNo)
	{
		int iCount = 0;
		for(int i=2; i<=iNo; i++)
		{
			if(iNo%i == 0)
			{
				iCount = iCount+1;
			}
		}
		if(iCount == 1)
		{
			System.out.println("It is a prime number");
		}
		else
		{
			System.out.println("It is not prime number");
		}
	}
}
