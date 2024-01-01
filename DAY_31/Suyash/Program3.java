/*
Q.3 Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
Input: nums = [2,2,1]
Output: 1

Input: nums = [4,1,2,1,2]
Output: 4

Author: Shreyash
*/
import java.util.Scanner;

public class Program3
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
		
		FindElement fobj = new FindElement();
		int iRet = fobj.ChkOccourence(arr);
		if(iRet == 0)
		{
			System.out.println("There is no such element");
		}
		else
		{
			System.out.println(iRet);
		}
		
		sobj.close();
	}
}

class FindElement
{
	public int ChkOccourence(int arr[])
	{
		for(int i=0; i<arr.length; i++)
		{
			int count = 0;
			for(int j=0; j<arr.length; j++)
			{
				if(arr[i] == arr[j])
				{
					count++;
				}
			}
			if(count == 1)
				return arr[i];
		}
		
		return 0;
	}
}
