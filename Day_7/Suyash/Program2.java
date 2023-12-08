/*
	Q.2 Program to print the elements of an array in reverse order
	Input:
	arr = [1, 2, 3, 4, 5]  
	
	Output:
	Original array: 1 2 3 4 5
	Array in reverse order: 5 4 3 2 1
*/

import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of array");
		int iNo = sobj.nextInt();
		
		int arr[] = new int[iNo];
		System.out.println("Enter elements of array");
		for(int i=0; i<iNo; i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		ReverseArray robj = new ReverseArray();
		robj.Reverse(iNo, arr);
		
		sobj.close();
	}
}

class ReverseArray
{
	public void Reverse(int iNo, int arr[])
	{
		System.out.print("Original Array : ");
		for(int i=0; i<iNo; i++)
		{
			System.out.print(arr[i]+" ");
		}
		
		
		System.out.println();
		System.out.print("Array in reverse order : ");
		for(int j=arr.length-1; j>=0; j--)
		{
			System.out.print(arr[j]+" ");
		}
	}
}
