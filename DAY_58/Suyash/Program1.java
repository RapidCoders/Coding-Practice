/*
	Q.1 Write a program that takes an array of integers as input and partitions it into two subarrays, 
	where the first subarray contains all the even numbers and the second subarray contains all the odd numbers. 
	The order of elements within each subarray should remain the same as in the original array.
	
	Input: [3, 6, 8, 2, 5, 7]
	Expected Output: [[6, 8, 2], [3, 5, 7]]
	
	Input: [2, 4, 6, 8]
	Expected Output: [[2, 4, 6, 8], []]
	
	Input: [1, 3, 5, 7, 9]
	Expected Output: [[], [1, 3, 5, 7, 9]]
	
	Input: [-3, 6, -8, 2, 5, -7]
	Expected Output: [[6, -8, 2], [-3, 5, -7]]
	
	Input: []
	Expected Output: [[], []]
			
	Author: Vaibhav
*/
import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size");
		int size = sobj.nextInt();
		
		int arr[] = new int[size];
		System.out.println("Enter the elements");
		for(int i=0; i<size; i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		TwoSubArrays tobj = new TwoSubArrays();
		int[][] result = tobj.partitionArray(arr);

        for (int i = 0; i < result.length; i++) 
        {
            System.out.print("[");
            for (int j = 0; j < result[i].length; j++) 
            {
                System.out.print(result[i][j]);
                if (j < result[i].length - 1) 
                {
                    System.out.print(", ");
                }
            }
            System.out.println("]");
        }
        
        sobj.close();
	}
}

class TwoSubArrays
{
	public int[][] partitionArray(int array[]) 
	{
        int evenCount = 0;
        int oddCount = 0;

        for (int i = 0; i < array.length; i++) 
        {
            if (array[i] % 2 == 0) 
            {
                evenCount++;
            } 
            else 
            {
                oddCount++;
            }
        }

        int evenArray[] = new int[evenCount];
        int oddArray[] = new int[oddCount];

        int evenIndex = 0;
        int oddIndex = 0;

        for (int i = 0; i < array.length; i++) 
        {
            if (array[i] % 2 == 0) 
            {
                evenArray[evenIndex++] = array[i];
            } 
            else 
            {
                oddArray[oddIndex++] = array[i];
            }
        }

        int[][] result = {evenArray, oddArray};

        return result;
    }
}
