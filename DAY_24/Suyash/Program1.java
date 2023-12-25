/*
	Q.1 You are given an array containing n distinct numbers taken from the range 0 to n. One number is missing from the array. 
		Write a function to find and return the missing number.
	Constraints: 1 <= arr[i] <= 100
	
	Input: 5
	Input: [1, 2, 3, 4, 6]
	Output: 5
	
	Input: 8
	Input: [1, 2, 3, 4, 5, 6, 7, 9]
	Output: 8
	
	Input: 4
	Input: [5, 2, 4, 1]
	Output: 3
	
	Input: 8
	Input: [8, 3, 6, 1, 5, 2, 4, 9]
	Output: 7
	
	Input: 8
	Input: [2, 1, 4, 5, 3, 8, 7, 6]
	Output: 9
	
	Author: Vaibhav
*/

import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number of elements");
		int size = sobj.nextInt();
		
		int arr[] = new int[size];
		
		System.out.println("Enter the elements");
		for(int i=0; i<size; i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		MissingNumber mobj = new MissingNumber();
		int iRet = mobj.CalcMissingNumber(size, arr);
		System.out.println("Missing element is : "+iRet);
		
		sobj.close();
	}
}

class MissingNumber
{
	public int CalcMissingNumber(int size, int arr[])
	{
		int sum1 = 0;
		for(int i=1; i<=size+1; i++)
		{
			sum1 = sum1 + i;
		}
		
		int sum2 = 0;
		for(int i=0; i<size; i++)
		{
			sum2 = sum2 + arr[i];
		}
		
		int sum3 = sum1 - sum2;
		
		return sum3;
	}
}
