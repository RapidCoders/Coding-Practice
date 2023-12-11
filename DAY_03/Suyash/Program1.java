/*
	Q1. Write a program which accept N number from the user and return the average.
	Input: 5
	Input: 10 20 30 40 50
	Output: 30
	
	Input: 6
	Input: 85 69 21 45 73 25
	Output: 53
	Author: Vaibhav
*/

import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("How many numbers do you want to enter");
		int No = sobj.nextInt();
		
		int arr[] = new int [No];
		
		System.out.println("Enter the elements");
		for(int i=0; i<No; i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		Average aobj = new Average();
		
		int iRes = aobj.CalcAvg(arr,No);
		
		System.out.println("Average of given numbers is : "+iRes);
		
		sobj.close();
	}
}

class Average
{
	public int CalcAvg(int arr[], int No)
	{
		int total = 0;
		int avg = 0;
		
		for(int i=0; i<No; i++)
		{
			total = total + arr[i];
		}
		 avg = total/No;
		 
		 return avg;
	}
}
