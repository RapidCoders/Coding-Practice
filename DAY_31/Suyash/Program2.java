/*
Q.2 Program to print Odd and Even Numbers from an Array.
Input  : 1,2,5,6,3,2
Output : Odd Numbers: 1 5 3
         Even Numbers: 2 6 2

Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of array");
		int size = sobj.nextInt();
		
		int arr[] = new int[size];
		System.out.println("Enter elements of array");
		for(int i=0; i<size; i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		OddEvenElements obj = new OddEvenElements();
		obj.ChkOddEven(arr);
		
		sobj.close();
	}
}

class OddEvenElements
{
	public void ChkOddEven(int arr[])
	{
		System.out.print("Odd Number : ");
		for(int i=0; i<arr.length; i++)
		{
			if(arr[i] % 2 == 0)
			{
				System.out.print(arr[i]+" ");
			}
		}
		
		System.out.println();
		System.out.print("Even Numbers : ");
		for(int i=0; i<arr.length; i++)
		{
			if(arr[i] % 2 != 0)
			{
				System.out.print(arr[i]+" ");
			}
		}
	}
}
