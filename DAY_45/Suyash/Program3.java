package com.Day45;
/*
	Q.3 Write a program to count the digits of a given number using recursion.
	Input: n = 15
	Output: 2
	
	Input: n = 3773
	Output: 4
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int num = sobj.nextInt();
		
		RecursiveCountDigits robj = new RecursiveCountDigits();
		int result = robj.CountDigits(num);
		System.out.println(result);
		
		sobj.close();
	}
}

class RecursiveCountDigits
{
	public int CountDigits(int num)
	{
		if(num%10 == 0)
		{
			return 0;
		}
		return 1+CountDigits(num/10);
	}
}
