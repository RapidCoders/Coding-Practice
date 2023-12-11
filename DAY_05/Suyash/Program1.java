/*
	Q1. Write a program which accept N numbers from user and display addition of digits of each element.
	Input: 5
	Input: 85 36 98 125 225
	Output: 13 9 17 8 9
	
	Input: 7
	Input: 854 698 236 14 75 32 65
	Output: 17 23 14 5 12 5 11
	Author: Vaibhav
*/

import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("How much elements do you want to enter");
		int iNo = sobj.nextInt();
		
		int arr[] = new int[iNo];
		System.out.println("Enter the elements");
		for(int i=0; i<iNo; i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		AdditionOfDigits aobj = new AdditionOfDigits();
		aobj.Addition(iNo, arr);
		
		sobj.close();
	}
}

class AdditionOfDigits
{
	public void Addition(int iNo, int arr[])
	{
		for(int i=0; i<iNo; i++)
		{
			int sum = 0;
			while(arr[i] != 0)
			{
				int res = arr[i]%10;
				sum = sum + res;
				arr[i] = arr[i]/10;
			}
			System.out.print(sum+" ");
		}
	}
}
