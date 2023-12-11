/*
Q3. Write a program which accept two numbers and give their relationship.
Input: 5 -5
Output: 5 is greater than -5


Input: 6 6.5
Output: 6.5 is greater than 6

Input: 42 42
Output: Numbers are same
Author: Shreyash
*/

import java.util.Scanner;

public class Program3
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter 1st element");
		float No1 = sobj.nextFloat();
		System.out.println("Enter 2nd nummber");
		float No2 = sobj.nextFloat();
		
		NumberRelation nobj = new NumberRelation();
		nobj.Relaation(No1, No2);
	}
}

class NumberRelation
{
	public void Relaation(float No1, float No2)
	{
		if(No1 == No2)
		{
			System.out.println("Numbers are same");
		}
		else if(No1 > No2)
		{
			System.out.println(No1+" is greater than "+No2);
		}
		else
		{
			System.out.println(No2+" is greater than "+No2);
		}
	}
}
