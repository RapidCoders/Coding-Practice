/*
	Q.2 Program to check whether number is Krishnamurthy number or not.
	Krishnamurthy number is another special number in Java. A number is said to be Krishnamurthy if the 
	factorial sum of all its digits is equal to that number. Krishnamurthy number is also referred to as a Strong number.
	
	Example : 
	Number = 145  
	= 1! + 4! + 5!  
	= 1 + ( 4 * 3 * 2 * 1 ) + ( 5 * 4 * 3 * 2 * 1 )  
	= 1 + 24 + 120  
	= 145
	 
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int iNo = sobj.nextInt();
		
		KrishnamurthyNumber fobj = new KrishnamurthyNumber();
		boolean bRet = fobj.Krishnamurthy(iNo);
		if(bRet == true)
			System.out.println("Krishnamurthy number");
		else
			System.out.println("Not a Krishnamurthy number");
		
		sobj.close();
	}
}

class KrishnamurthyNumber 
{
	public boolean Krishnamurthy(int iNo)
	{
		int temp = iNo;
		int sum =0;
		
		while(temp != 0)
		{
			int fact = 1;
			int rem = temp%10;
			
			while(rem != 0)
			{
				fact = fact*rem;
				rem--;
			}
			
			sum = sum+fact;
			temp = temp/10;
		}
		
		if(sum == iNo)
			return true;
		else
			return false;
	}
}
