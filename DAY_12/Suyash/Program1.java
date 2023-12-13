/*
	Q.1 Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to the target.
	Input: nums = [2, 7, 11, 15], target = 9
	Output: [0, 1]
	Explanation: nums[0] + nums[1] equals 9, so the answer is [0, 1].
	
	Input: nums = [3, 2, 4], target = 6
	Output: [1, 2]
	Explanation: nums[1] + nums[2] equals 6.
	
	Input: nums = [3, 2, 9, 7], target = 4
	Output: Not Found
	
	Author: Vaibhav
*/

import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("How many elements do you want to enter");
		int iSize = sobj.nextInt();
		System.out.println("Enter your desired target");
		int target = sobj.nextInt();
		
		int arr[] = new int[iSize];
		System.out.println("Enter elements of array");
		for(int i=0; i<iSize; i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		TargetInteger tobj = new TargetInteger();
		int[] result = tobj.Target(iSize, target, arr);
		
		if(result[0]==-1 && result[1]==-1)
		{
			System.out.println("Not found");
		}
		else
		{
			System.out.println("["+result[0]+", "+result[1]+"]");
		}
		sobj.close();
	}
}

class TargetInteger 
{
	public int[] Target(int iSize,int target, int arr[])
	{		
		for(int i=0; i<arr.length-1; i++)
		{
			for(int j=i+1; j<arr.length; j++)
			{
				if(arr[i]+arr[j] == target)
				{
					return new int[]{i,j}; 
				}
			}
		}
		return new int[]{-1,-1};
	}
}
