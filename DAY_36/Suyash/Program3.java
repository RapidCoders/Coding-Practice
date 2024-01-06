/*
	Q.3 Program to Calculate HCF of Two Number.
	Input:   num1 = 36
	         num2 = 60
	
	Output: 12
	
	Input:   num1 = 56
	         num2 = 12
	
	Output: 4
	
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
		
		HCFof2Numbers hobj = new HCFof2Numbers();
		int iRet = hobj.CalcHCF(num1, num2);
		System.out.println("HCF is : "+iRet);
		
		sobj.close();
	}
}

class HCFof2Numbers
{
	public int CalcHCF(int num1, int num2)
	{
		int min = Math.min(num1,num2);
	    int hcf = 0;
	    
	    if(num1 == 0||num2 == 0)
	    {
	        hcf = num1+num2;
	        return hcf;
	    }
	    else if(num1 == num2)
	    {
	        hcf = num1;
	        return hcf;

	    }
	    else
	    {
	        for(int i = 1;i<min;i++)
	        {
	            if(num1%i == 0 && num2%i == 0)
	            {
	                hcf = i;
	                
	            }

	        }
	    }
	    return hcf;
	}
}
