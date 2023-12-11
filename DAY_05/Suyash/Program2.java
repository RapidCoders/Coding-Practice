/*
	Q2. Program to find frequency of each element in array.(Take array elements from user)
	Input:
	
	arr = [1, 2, 8, 3, 2, 2, 2, 5, 1]  
	Output:
	
	Element | Frequency
	     1  |  2
	     2  |  4
	     8  |  1
	     3  |  1
	     5  |  1
	Author: Suyash
*/

import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("How much elements do you want to enter");
		int iNo = sobj.nextInt();
		
		int arr[] = new int[iNo];
		System.out.println("Enter the elements");
		for(int i=0; i<iNo; i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		FrequencyOfElements fobj = new FrequencyOfElements();
		fobj.Frequency(iNo, arr);
		
		sobj.close();
	}
}

class FrequencyOfElements
{
	public void Frequency(int iNo, int arr[])
	{
		System.out.println("Element  |  Frequency");
		System.out.println("---------------------");
		for(int i=0; i<iNo; i++)
		{
			int el = arr[i];
			int iCnt = 0;
			for(int j=0; j<iNo; j++)
			{
				if((el == arr[j]) && (arr[j] != -1))
				{
					iCnt = iCnt + 1;
					arr[j] = -1;
				}
			}
			if(iCnt != 0)
			{
				System.out.println("   "+el+"     |  "+"   "+iCnt+" ");
			}
		}
	}
}
