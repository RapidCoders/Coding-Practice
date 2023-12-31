/*
	Q.2 Write a program to check whether given number is Fascinating number or not.
	Example :
	Let's take any number (n) say 327 and check whether the given number is fascinating or not. 
	On multiplying the given number (n) by 2 and 3, we get:
	
	327×2=654
	
	327×3=981
	
	Now, concatenate the above results to the given number (n).
	
	"327"+"654"+ "981"= 327654981
	
	We observe that the resultant () contains all the digits from 1 to 9, exactly once. 
	Hence, the given number 327 is a fascinating number. Note that, we have not added the 
	result to the given number. Some other fascinating numbers are 192, 219, 273, 327, 1902, 1920, 2019 etc.
	
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
		
		FascinatingNumber fobj = new FascinatingNumber();
		boolean bRet = fobj.ChkFascinating(num);
		if(bRet == true)
		{
			System.out.println("It is fascinating number");
		}
		else
		{
			System.out.println("It is not a fascinating number");
		}
		
		sobj.close();
	}
}

class FascinatingNumber
{
	public boolean ChkFascinating(int num)
	{
		int No1 = num*2;
		int No2 = num*3;
		
		String sNum = Integer.toString(num);
		String sNo1 = Integer.toString(No1);
		String sNo2 = Integer.toString(No2);
		
		String newNum = sNum+sNo1+sNo2;
		
		int count = 0;
		for(char ch='1'; ch<='9'; ch++)
		{
			count = 0;
			for(int j=0; j<newNum.length(); j++)
			{
				if(newNum.charAt(j) == ch)
				{
					count++;
				}
				if(count == 2)
					return false;
			}
		}
		return true;
	}
}
