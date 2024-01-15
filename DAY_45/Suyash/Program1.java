/*
	Q.1 Write a program to find the largest prime palindrome less than or equal to a given number n.
		The program should take the input n and output the largest prime palindrome found.
	
	Input: 50
	Output: 11
	
	Input: 500
	Output: 383
	
	Input: 1000
	Output: 929
	
	Author: Vaibhav
*/
import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int n = sobj.nextInt();
		
		LargestPrimePalindrome lobj = new LargestPrimePalindrome();
		int Result = lobj.findLargestPrimePalindrome(n);
		if(Result == -1)
			System.out.println("No such number present");
		else
			System.out.println(Result);
		
		sobj.close();
	}
}

class LargestPrimePalindrome
{
	public int findLargestPrimePalindrome(int n) 
	{
        for (int i = n; i >= 2; i--) 
        {
            if (isPalindrome(i) && isPrime(i)) 
            {
                return i;
            }
        }
        return -1; 
    }

    public boolean isPalindrome(int num) 
    {
        int originalNum = num;
        int reversedNum = 0;

        while (num > 0) 
        {
            int digit = num % 10;
            reversedNum = reversedNum * 10 + digit;
            num = num/10;
        }

        return originalNum == reversedNum;
    }

    public boolean isPrime(int num) 
    {
        if (num < 2) 
        {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(num); i++) 
        {
            if (num % i == 0) 
            {
                return false;
            }
        }
        return true;
    }
}
