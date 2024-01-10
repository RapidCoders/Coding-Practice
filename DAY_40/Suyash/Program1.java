/*
Q.1 Write a program to implement a function that finds the second-largest element in an array.
	The function should take an array of integers as input and return the second-largest element. 
	If there is no second-largest element, return -1.

Input: [3, 8, 5, 2, 7, 1, 6, 4]
Output: 7

Input:  [10, 10, 10, 10, 10]
Output: -1

Input:  [-5, -2, 0, 3, 7, 1]
Output: 3

Input:  [5, 5, 5, 5, 5, 5, 5, 5]
Output: -1

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
		
		SecondLargest obj = new SecondLargest();
		int iRet = obj.Chk2ndLargest(Arr);
		if(iRet == -1)
		{
			System.out.println("There is NO such 2nd largest number");
		}
		else
		{
			System.out.println("2nd largest number is : "+iRet);
		}
		
		sobj.close();
	}
}

class SecondLargest
{
	public int Chk2ndLargest(int Arr[])
	{
		int temp = 0;
		for(int i=0; i<Arr.length; i++)
		{
			for(int j=0; j<Arr.length; j++)
			{
				if(Arr[i] > Arr[j])
				{
					temp = Arr[j];
					Arr[j] = Arr[i];
					Arr[i] = temp;
				}
			}
		}
		
		if(Arr[0] == Arr[1])
		{
			return -1;
		}
		else
		{
			return Arr[1];
		}
	}
}
