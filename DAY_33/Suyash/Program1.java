/*
	Q.1 Given an array of integers, find the majority element. The majority element is the element that appears 
	more than or equal to ⌊n/2⌋ times. Write a function to find the majority element. You may assume that the array 
	is non-empty and the majority element always exists in the array.
	
	Input: [3, 3, 4, 2, 4, 4, 2, 4, 4]
	Output: 4
	
	Input: [1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9]
	Output: None.
	
	Input: [2, 2, 1, 1, 1, 2, 2]
	Output: 2
	
	Input: [3, 1, 1, 1, 2, 2, 2, 3, 3, 3]
	Output: None.
	
	Input: [2, 2, 2, 1, 1, 3, 3, 3, 3]
	Output: 3
	
	Author: Vaibhav
*/
import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of array");
		int size = sobj.nextInt();
		
		int arr[] = new int[size];
		
		System.out.println("Enter elements");
		for(int i=0; i<size; i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		MajorityElement mobj = new MajorityElement();
		int iRet = mobj.ChkMajoriy(arr);
		if(iRet == -1)
		{
			System.out.println("There is no majority element");
		}
		else
		{
			System.out.println("Majority element is : "+iRet);
		}
		
		sobj.close();
	}
}

class MajorityElement
{
	public int ChkMajoriy(int arr[])
	{
		int candidate = -1;
		int count = 0;
		
		for(int i=0; i<arr.length; i++)
		{
			if(count == 0)
			{
				candidate = arr[i];
				count++;
			}
			else if(candidate == arr[i])
			{
				count++;
			}
			else
			{
				count--;
			}
		}
		
		count = 0;
		for(int i=0; i<arr.length; i++)
		{
			if(arr[i] == candidate)
			{
				count++;
			}
		}
		
		if(count >= arr.length/2)
		{
			return candidate;
		}
		else
		{
			return -1;
		}
	}
}
