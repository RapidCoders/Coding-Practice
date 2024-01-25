/*
	Q.1 Write a function that takes a positive integer as input and returns the length of the longest binary gap.
	A binary gap is the longest sequence of consecutive zeros in the binary representation of the number.
	
	Input: 15
	Expected Output: 0  # Binary representation: 1111, no gap.
	
	Input: 20
	Expected Output: 1  # Binary representation: 10100, one gap between the 1s.
	
	Input: 1048577
	Expected Output: 19  # Binary representation: 100000000000000000001, longest gap between the 1s.
	
	Input: 77
	Expected Output: 2  # Binary representation: 1001101, two gaps between the 1s.
	
	Input: 0
	Expected Output: 0  # Binary representation: 0, no gap.
	
	Author: Vaibhav
*/
import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int num = sobj.nextInt();
		
		LongestBinaryGap lobj = new LongestBinaryGap();
		int Gap = lobj.LongestGap(num);
		System.out.println(Gap);
		
		sobj.close();
	}
}

class LongestBinaryGap
{
	public int LongestGap(int num)
	{
		if (num <= 0) 
		{
            return 0;
        }

        String binaryRepresentation = ToBinary(num);

        int maxGap = 0;
        int currentGap = 0;

        for (int i = 0; i < binaryRepresentation.length(); i++) 
        {
            char c = binaryRepresentation.charAt(i);

            if (c == '0') 
            {
                currentGap++;
            } 
            else 
            {
                maxGap = Math.max(maxGap, currentGap);
                currentGap = 0;
            }
        }

        return maxGap;
	}
	public String ToBinary(int num)
	{
		StringBuilder binary = new StringBuilder();

        while (num > 0) 
        {
            int remainder = num % 2;
            binary.insert(0, remainder);
            num = num/2;
        }

        return binary.toString();
	}
}
