/*
	Q.2 Program to print the elements of an array present on even position
	Input:
	arr = [1, 2, 3, 4, 5]  
	
	Output:
	Elements of given array present on even position:
	2
	4
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size");
		int size = sobj.nextInt();
		
		int arr[] = new int[size];
		System.out.println("Enter elements");
		for(int i=0; i<size; i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		PrintEvenElements pobj = new PrintEvenElements();
		pobj.PrintEven(arr);
		
		sobj.close();
	}
}

class PrintEvenElements 
{
	public void PrintEven(int arr[])
	{
		System.out.println("Elements of given array present on even position:");
		for(int i=0; i<arr.length; i++)
		{
			if((i+1)%2 == 0)
			{
				System.out.println(arr[i]);
			}
		}
	}
}
