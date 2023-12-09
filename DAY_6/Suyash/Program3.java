/*
	Q3. Write a program which accept number and Replace All 0’s With 1 .
	Input: 900120678
	Output:911121678
	
	Input: 84850060
	Output:84851161
	
	Author: Shreyash
*/

import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int iNo = sobj.nextInt();
		
		ReplaceNumber robj = new ReplaceNumber();
		int iRes = robj.Replace(iNo);
		System.out.println(iRes);
	}
}

class ReplaceNumber
{
	public int Replace(int iNo)
	{
		int rev = 0;
		while(iNo != 0)
		{
			int res = iNo%10;
			if(res == 0)
			{
				res = 1;
				rev = (rev*10)+ res;
			}
			else
			{
				rev = (rev*10)+ res;
			}
			iNo = iNo/10;
		}
		
		int temp = rev;
		int rev1 = 0;
		while(temp != 0)
		{
			int res = temp%10;
			rev1 = (rev1*10)+res;
			temp = temp/10;
		}
		
		return rev1;
	}
}
