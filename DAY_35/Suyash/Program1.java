/*
	Q.1 You are given two sorted arrays, nums1 and nums2, where nums1 has enough space at the end to hold all elements from nums2.
	Write a program to merge nums2 into nums1 in sorted order.
	nums1: [1, 2, 3, 0, 0, 0], m: 3
	nums2: [2, 5, 6], n: 3
	Expected Output: [1, 2, 2, 3, 5, 6]
	
	nums1: [], m: 0
	nums2: [1, 2, 3], n: 3
	Expected Output: [1, 2, 3]
	
	nums1: [6, 5, 4, 0, 0, 0], m: 3
	nums2: [3, 2, 1], n: 3
	Expected Output: [1, 2, 3, 4, 5, 6]
	
	nums1: [1, 2, 2, 0, 0, 0], m: 3
	nums2: [2, 3, 4], n: 3
	Expected Output: [1, 2, 2, 2, 3, 4]
	
	Author: Vaibhav
*/
import java.util.Scanner;

public class Program1
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		//Elements of first array
		System.out.println("Enter size of first Array");
		int size1 = sobj.nextInt();
		int arr1[] = new int[size1];
		System.out.println("Enter elements of first array");
		for(int i=0; i<size1; i++)
		{
			arr1[i] = sobj.nextInt();
		}
		
		System.out.println("Enter size of Second Array");
		int size2 = sobj.nextInt();
		size2 = size2+size1;		
		int arr2[] = new int[size2];
		//Add all elements of first array into second array
		System.out.println("Enter elements of second array");
		for(int i=0; i<size1; i++)
		{
			arr2[i] = arr1[i];
		}
		//Take elements of second array
		for(int i=size1; i<size2; i++)
		{
			arr2[i] = sobj.nextInt();
		}
		
		AddArrays aobj = new AddArrays();
		aobj.ConcatArray(arr2);
		
		sobj.close();
	}
}

class AddArrays
{
	public void ConcatArray(int arr[])
	{
		for(int i=0; i<arr.length; i++)
		{
			for(int j=0; j<arr.length; j++)
			{
				if(arr[j] > arr[i])
				{
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		
		for(int i=0; i<arr.length; i++)
		{
			System.out.print(arr[i]+" ");
		}
	}
}
