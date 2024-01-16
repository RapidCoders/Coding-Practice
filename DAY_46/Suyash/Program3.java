/*
	Q.3 Write an algorithm to determine if a number n is happy Return true if n is a happy number, and false if not.
	Input: n = 19
	Output: true
	Explanation:
	1^2 + 9^2 = 82
	8^2 + 2^2 = 68
	6^2 + 8^2 = 100
	1^2 + 0^2 + 0^2 = 1
	
	Input: n = 2
	Output: false
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int num = sobj.nextInt();
		
		HappyNumber hobj = new HappyNumber();
		boolean result = hobj.ChkHappy(num);
		if(result == true)
			System.out.println("true");
		else
			System.out.println("false");
		
		sobj.close();
	}
}

class HappyNumber
{
	public boolean ChkHappy(int num)
	{
		int result = num;
		
		while(result != 1 && result != 4)
		{
			result = isHappyNumber(result);
		}
		
		if(result == 1)
			return true;
		else
			return false;
	}
	
	public int isHappyNumber(int num)
	{
		int sum = 0;
		
		while(num > 0)
		{
			int rem = num%10;
			sum = sum + (rem*rem);
			num = num/10;
		}
		
		return sum;
	}
}
