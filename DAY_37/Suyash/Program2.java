/*
	Q.2 Write a method to check and return whether given number is nude number or not.
	Explanation:
	A number is said to be nude number if all the digits of the number is the factor of that number.
	In short, nude numbers are those numbers that expose their factor.
	
	Example 1:
	672 is a nude number because all the digits (6, 7, and 2) of the number are the factors of the number itself.
	
	Let's see another example.
	
	Example 2:
	101 is not a nude number because all of the digits of the number 101, i.e., 1 and 0, do not divide the number 101.
	Observe that 1 divides the number 101, but 0 does not divide the number. Thus, we got at least one digit that does 
	not divide the number 101.
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{	
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int num = sobj.nextInt();
		
		NudeNumber nobj = new NudeNumber();
		boolean bRet = nobj.ChkNude(num);
		if(bRet == true)
		{
			System.out.println("It is a nude number");
		}
		else
		{
			System.out.println("It is not a nude number");
		}
		
		sobj.close();
	}
}

class NudeNumber
{
	public boolean ChkNude(int num)
	{
		int temp = num;
		
		while(temp != 0)
		{
			int rem = temp % 10;
			
			if(rem == 0)
			{
				return false;
			}
			if(num % rem != 0)
			{
				return false;
			}
			
			temp = temp/10;
		}
		
		return true;
	}
}
