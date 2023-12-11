/*
	Q3. Write a program to find factorial of input number.
	Input: 5
	Output: 120
	
	Input: 4
	Output: 24
	Author: Shreyash
*/

import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number you want to find factorial");
		int iNo = sobj.nextInt();
		
		NFactorial fobj = new NFactorial();
		int iRes = fobj.Factorial(iNo);
		
		System.out.println("Facotrial is : "+iRes);
	}
}

class NFactorial
{
	public int Factorial(int iNo)
	{
		int mul = 1;
		
		for(int i=1; i<=iNo; i++)
		{
			mul = mul*i;
		}
		
		return mul;
	}
}
