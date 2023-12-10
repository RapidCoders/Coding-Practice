/*
	Q.2 Program to print the elements of an array present on odd position.
	Input: arr = [1, 2, 3, 4, 5]  
	
	Output: Elements of given array present on odd position: 2 4  
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
		
		ArrayOdd aobj = new ArrayOdd();
		aobj.OddIndex(iSize, arr);
	}
}

class ArrayOdd
{
	public void OddIndex(int iSize, int arr[])
	{
		System.out.println("Elements of given array present on odd position : ");
		for(int i=0; i<iSize; i++)
		{
			if(i%2 != 0)
			{
				System.out.print(arr[i]+" ");
			}
		}
	}
}
