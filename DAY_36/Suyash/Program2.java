/*
	Q.2 Write a method to check and return whether given number is duck number or not.
	
	Explanation:
	Duck number is another special positive non-zero number that contains zero in it. 
	The digit zero should not be presented at the starting of the number.
	Zero can be present at any of the positions except the beginning of the number.
	
	Let's understand some examples of Duck numbers.
	
	3210 is a Duck number because it contains zero at the end of the number but not present at the beginning of it.
	08237 is not a Duck number because it contains zero at the beginning of it.
	7033 is a Duck number because it contains zero at the second position, not at the beginning.
	030405 is not a Duck number because it also contains zero in starting of the number.
	00153 is also not a Duck number because it contains leading zeros.
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		String num = sobj.next();
		
		DuckNumber dobj = new DuckNumber();

		if(dobj.ChkDuck(num))
		{
			System.out.println("It is a Duck Number");
		}
		else
		{
			System.out.println("It is not a Duck Number");
		}
		
		sobj.close();
	}
}

class DuckNumber
{
	public boolean ChkDuck(String num)
	{
		int zero = 0;
		char ch;
		
		for(int i=0; i<num.length(); i++)
		{
			ch = num.charAt(i);
			if(ch == '0')
			{
				zero++;
			}
		}
		
		char firstDigit = num.charAt(0);
		if(firstDigit!='0' && zero>0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
