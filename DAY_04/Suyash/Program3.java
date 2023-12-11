/*
Q3. Write a program which accept N number from the user and return smallest number from it.
Input: 5
Input: 10 20 30 40 50
Output: 10

Input: 6
Input: 85 69 21 45 73 25
Output: 21
Author: Shreyash
*/

import java.util.Scanner;
public class Program3 
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
		
		SmallestRange robj = new SmallestRange();
		int iRes = robj.Range(iNo, arr);
		System.out.println("Smallest number is : "+iRes);
	}
}

class SmallestRange
{
	public int Range(int iNo, int arr[])
	{
		int min = arr[0];
		for(int i=0; i<iNo; i++)
		{
			if(min > arr[i])
			{
				min = arr[i];
			}
		}
		return min;
	}
}
