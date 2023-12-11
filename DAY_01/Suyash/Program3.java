/*
	Q3. Write a program which takes a year as input and check whether it is leap year or not.
	Input: 2000
	Output: True.
	
	Input: 2013
	Output: False.
	
	Author: S G
*/

import java.util.Scanner;

public class LeapYear 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Year you want to check whether it is leap year or not");
		int iYear = sobj.nextInt();
		
		CheckLeap cobj = new CheckLeap();
		cobj.Leap(iYear);
	}
}

class CheckLeap
{
	public void Leap(int iYear)
	{
		if(iYear%4 == 0)
		{
			System.out.println("It is a Leap Year");
		}
		else
		{
			System.out.println("It is not a leap year");
		}
	}
}
