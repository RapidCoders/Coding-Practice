/*
	Q.3 Write a program to Find GCD of Two Numbers.
	Explaination: 
	Factors of 12: 1, 2, 3, 4, 6, 12
	
	Factors of 8: 1, 2, 4, 8
	
	Common Factors: 1, 2, 4
	
	Greatest Common Factor: 4
	
	Hence, the GCF of 12 and 8 is 4.
	
	Input: num1 = 55
	       num2 = 70
	Output: the GCF of 55 and 70 is 5.
	
	Input: num1 = 34
	       num2 = 76
	Output: the GCF of 34 and 76 is 2.
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter 1st number");
		int num1 = sobj.nextInt();
		System.out.println("Enter 2nd number");
		int num2 = sobj.nextInt();
		
		FindGCD fobj = new FindGCD();
		int iRet = fobj.GCD(num1, num2);
		System.out.println("the GCF of "+num1+" and "+num2+" is : "+iRet);
		
		sobj.close();
	}
}

class FindGCD
{
	public int GCD(int num1, int num2)
	{
		while(num1 != num2) 
	    {
	    if(num1 > num2)
	      num1 = num1 - num2;
	    else
	      num2 = num2 - num1;
	    }

	    return num1;
	}
}
