/*
	Q.2 Program to check whether a given number is Tech number or not.
	
	Explanation : A number is called a tech number if the given number has an even number of digits and the number can be divided 
		          exactly into two parts from the middle. After equally dividing the number, sum up the numbers and find the square 
		          of the sum. If we get the number itself as square, the given number is a tech number, else, not a tech number. 
		          For example, 3025 is a tech number.
	
	Input: 3025
	Output: Tech Number
	
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
		
		TechNumber tobj = new TechNumber();
		boolean bRet = tobj.ChkTechNumber(num);
		if(bRet == true)
		{
			System.out.println(num+" is a tech number");
		}
		else
		{
			System.out.println(num+" is not a Tech Number");
		}
		
		sobj.close();
	}
}

class TechNumber
{
	public boolean ChkTechNumber(int num)
	{
		int temp = num;
		int count = 0;
		
		while(temp > 0)
		{
			count++;
			temp = temp/10;
		}
				
		if(count % 2 != 0)
		{
			return false;
		}
		else
		{
			int temp1 = num;
			
			//Convert Integer to String
			String str = Integer.toString(temp1);
			String No1 = "";
			String No2 = "";
			
			for(int i=0; i<str.length()/2; i++)
			{
				No1 = No1 + str.charAt(i);
			}
			
			for(int j=str.length()/2; j<str.length(); j++)
			{
				No2 = No2 + str.charAt(j);
			}
			
			//Convert String to Integer
			int num1 = Integer.parseInt(No1);
			int num2 = Integer.parseInt(No2);

			
			int SquareOfSum = (num1+num2) * (num1+num2);
						
			if(SquareOfSum == num)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
}
