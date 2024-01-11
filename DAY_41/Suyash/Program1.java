/*
	Q.1 Write a program to implement a function that finds the maximum product of two integers in an array of integers. 
	The array may contain both positive and negative integers.
	Input: [1, 2, 3, 4, 5]
	Output: 20
	
	Input:  [-10, -3, 5, 2, -9]
	Output: 90
	
	Input:  [-5, -4, 2, 8, 1]
	Output: 20
	
	Input:  [4, -2, 8, -1, 3]
	Output: 32
	
	Author: Vaibhav
*/
import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of Array");
		int size = sobj.nextInt();
		
		int Arr[] = new int[size];
		
		System.out.println("Enter the elements");
		for(int i=0; i<size; i++)
		{
			Arr[i] = sobj.nextInt();
		}
		
		MaximumOf2Numbers mobj = new MaximumOf2Numbers();
		int iRet = mobj.CalMaxProuct(Arr);
		System.out.println(iRet);
		
		sobj.close();
	}
}

class MaximumOf2Numbers 
{
	public int CalMaxProuct(int Arr[])
	{
		int temp = 0;
		for(int i=0; i<Arr.length; i++)
		{
			for(int j=0; j<Arr.length; j++)
			{
				if(Arr[j] > Arr[i])
				{
					temp = Arr[j];
					Arr[j] = Arr[i];
					Arr[i] = temp;
				}
			}
		}
		
		int product1 = 1;
		int product2 = 1;
		
		int n = Arr.length;
		
		product1 = Arr[0] * Arr[1];
		product2 = Arr[n-1] * Arr[n-2];
		
		
		if(product1 >= product2)
		{
			return product1;
		}
		else
		{
			return product2;
		}
	}
}
