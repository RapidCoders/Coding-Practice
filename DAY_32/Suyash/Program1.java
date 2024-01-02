/*
	Q.1 Write a function that takes an array of integers and returns the length of the longest consecutive elements sequence.
	Input: [100, 4, 200, 1, 3, 2]
	Output: 4 (the longest consecutive elements sequence is [1, 2, 3, 4])
	
	Input: [9, 1, 4, 7, 2, 8, 3, 5]
	Output: 5 (the longest consecutive elements sequence is [1, 2, 3, 4, 5])
	
	Input: [3, 3, 2, 2, 1, 1]
	Output: 3 (longest consecutive sequence is [1, 2, 3])
	
	Input: [10, 20, 30, 40, 50]
	Output: 50 (longest consecutive sequence is [10, 20, 30, 40, 50])
	
	Author: Vaibhav
*/
import java.util.Scanner;

public class Program1 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the number of elements in the array: ");
        int size = sobj.nextInt();
        
        int arr[] = new int[size];

        System.out.println("Enter the elements of the array:");
        for (int i=0; i<size; i++) 
        {
            arr[i] = sobj.nextInt();
        }
        
        LongestConsecutiveSequence lobj = new LongestConsecutiveSequence();
        int result = lobj.longestConsecutive(arr);
        System.out.println("Longest  Consecutive sequence is : " + result);

        sobj.close();
    }
}

class LongestConsecutiveSequence
{
    public int longestConsecutive(int arr[]) 
    {
        if (arr == null || arr.length == 0) 
        {
            return 0;
        }

        for (int i=0; i<arr.length-1; i++) 
        {
            for (int j=0; j<arr.length-i-1; j++) 
            {
                if (arr[j] > arr[j+1]) 
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

        int longestStreak = 1;
        int currentStreak = 1;

        for (int i=1; i<arr.length; i++) 
        {
            if (arr[i] != arr[i-1]) 
            {
                if (arr[i] == arr[i-1]+1) 
                {
                    currentStreak++;
                } 
                else 
                {
                    longestStreak = Math.max(longestStreak, currentStreak);
                    currentStreak = 1;
                }
            }
        }

        return Math.max(longestStreak, currentStreak);
    }
}
