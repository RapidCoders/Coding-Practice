import java.util.Arrays;
/*
	Q.3 Write a program which accept n numbers in array and gives difference between maximum and minimum.
	Input: n =5
	       32 332 -23 -154 65
	Output: 486
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
    	
        System.out.println("Enter size");
        int size = sobj.nextInt();
        
        int arr[] = new int[size];
        
        System.out.println("Enter the elements");
        for(int i=0; i<size; i++)
        {
        	arr[i] = sobj.nextInt();
        }
        
        MinMaxDiff mobj = new MinMaxDiff();
        int result = mobj.CalcDiff(arr);
        System.out.println(result);
        
        sobj.close();
	}
}

class MinMaxDiff
{
	public int CalcDiff(int arr[])
	{
		Arrays.sort(arr);
		int len = arr.length;
		
		int diff = arr[0] - arr[len-1];
		
		return diff;
	}
}
