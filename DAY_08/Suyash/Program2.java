/*
	Q.2 Program to print the elements of an array present on even position
	
	Input: arr = [1, 2, 3, 4, 5]  
	
	Output: Elements of given array present on even position: 1 3 5
	Author: Suyash
*/

import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of Array");
		int iSize = sobj.nextInt();
		
		int arr[] = new int[iSize];
		System.out.println("Enter elements of array");
		for(int i=0; i<iSize; i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		ArrayEven aobj = new ArrayEven();
		aobj.EvenIndex(iSize, arr);
	}
}

class ArrayEven
{
	public void EvenIndex(int iSize, int arr[])
	{
		System.out.println("Elements of given array present on even position : ");
		for(int i=0; i<iSize; i++)
		{
			if(i%2 == 0)
			{
				System.out.print(arr[i]+" ");
			}
		}
	}
}
