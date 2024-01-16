/*
	Q.1 Write a function that determines if a given positive integer is a power of four.
	Input: 16
	Output: true
	Explanation: 16 is 4^2.
	
	Input: 64
	Output: true
	Explanation: 64 is 4^3.
	
	Input: 5
	Output: false
	Explanation: 5 is not a power of four.
	
	Input: 1
	Output: true
	Explanation: 1 is 4^0.
	
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
		
		Powerof4 pobj = new Powerof4();
		boolean result = pobj.ChkPower(num);
		if(result == false)
			System.out.println(num+" is not a power of 4");
		else
			System.out.println(num+" is a power of 4");
		
		sobj.close();
	}
}

class Powerof4
{
	public boolean ChkPower(int num)
	{
		if(num <= 0)
			return false;
		
		while(num > 1)
		{
			if(num%4 != 0)
				return false;
			num = num/4;
		}
		
		return num == 1;
	}
}
