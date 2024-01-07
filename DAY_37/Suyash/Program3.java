/*
	Q.3 write Program to find the LCM of two numbers
	Input:   num1 = 12
	         num2 = 14
	
	Output: 84
	
	Input:   num1 = 55
	         num2 = 15
	
	Output: 165
	
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
		
		LCMof2Numbers lobj = new LCMof2Numbers();
		int iRet = lobj.CalcHCF(num1, num2);
		System.out.println("HCF is : "+iRet);
		
		sobj.close();
	}
}

class LCMof2Numbers
{
	public int CalcHCF(int num1, int num2)
	{
	    int gcd = 1;
	    
	    for(int i=1; i<=num1 && i<=num2; i++)
	    {
	    	if(num1%i==0 && num2%i==0)
	    	{
	    		gcd = i;
	    	}
	    }
	    
	    int lcm = (num1*num2)/gcd;
	    
	    return lcm;
	}
}
