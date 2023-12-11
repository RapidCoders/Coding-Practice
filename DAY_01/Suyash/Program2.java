/*
	Q2. Write a program to count number of digits in given number.
	Input: 4365
	Output: Number of digits are 4.
	
	Input: 125
	Output: Number of digits are 3.
	
	Author: Suyash
*/

import java.util.Scanner;

public class CountDigits 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int iNo = sobj.nextInt();
		
		Digits dobj = new Digits();
		dobj.TotalDigits(iNo);
		
		sobj.close();
	}
}

class Digits
{
	public void TotalDigits(int iNum)
	{
		int iCount = 0;
		while(iNum != 0)
		{
			int iRes = iNum%10;
			iCount = iCount+1;
			iNum = iNum/10;
		}
		
		System.out.println("Number of digits are :"+iCount);
	}
}
