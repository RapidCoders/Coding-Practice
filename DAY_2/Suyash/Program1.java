/*
Q1. Write a program which accept number from the user and return the addition digits.
Input: 3458
Output: 20

Input: 52
Output: 7

Author: Vaibhav
*/

import java.util.Scanner;

public class Program1
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int iNum = sobj.nextInt();
		
		AddDigits aobj = new AddDigits();
		int iResult = aobj.Addition(iNum);
		System.out.println("Addition of digits is : "+iResult);
		
		sobj.close();
		
	}
}

class AddDigits
{
	public int Addition(int iNo)
	{
		int iCount = 0;
		while(iNo != 0)
		{
			int iRes = iNo % 10;
			iCount = iCount + iRes;
			iNo = iNo/10;
		}
		
		return iCount;
	}
}
