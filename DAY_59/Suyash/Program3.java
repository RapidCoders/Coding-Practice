/*
	Q.3 Write a program to check the number is Strontio Number or not.
	
	Explanation: Strontio numbers are those four digits numbers when multiplied by 2 give the same digit at the hundreds and tens place. 
	Remember that the input number must be a four-digit number.
	
	1386*2=2772, we observe that at tens and hundreds place digits are the same. Hence, 1386 is a strontio number.
	1221*2=2442, digits at tens and hundreds place are the same. Hence, 1221 is a strontio number.
	
	Some other strontio numbers are 1111, 2222, 3333, 4444, 5555, 6666, 7777, 8888, 9999, 1001, 2002, 3003, etc.
	
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
		
		StrontioNumber obj = new StrontioNumber();
		if(obj.ChkStrontio(num))
			System.out.println("True");
		else
			System.out.println("False");
		
		sobj.close();
	}
}

class StrontioNumber
{
	public boolean ChkStrontio(int num)
	{
		if((num>999)&&(num<10000))
		{
	        num = num * 2;
	        num = num / 10;
	        num = num % 100;
	        if(num/10 == num%10)
	        {
	            return true;
	        }
	        else
	        {  
	            return false;
	        }
	    }
	    else
	    {   
	    	System.out.println("\"Enter Number Greater than 999\"");
	    }
	    return false;
	}
}
