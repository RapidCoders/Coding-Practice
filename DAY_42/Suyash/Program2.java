/*
	Q.2 Program to Check Disarium number
	Input: num = 135  
	
	Output:
	  1^1 + 3^2 + 5^3 = 135
	  135 is a disarium number
	
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
		
		DisariumNumber dobj = new DisariumNumber();
		boolean Result = dobj.ChkDisarium(num);
		if(Result == true)
			System.out.println("Number is Disairum");
		else
			System.out.println("Number is not Disairum");
		
		
		sobj.close();
	}
}

class DisariumNumber
{
	public boolean ChkDisarium(int num)
	{
		int temp = num;
		int count = 0;
		while(temp != 0)
		{
			count++;
			temp = temp/10;
		}
				
		int temp2 = num;
		int sum = 0;
		while(temp2 != 0)
		{
			int digit = temp2%10;
			sum += Math.pow(digit,count);
			temp2 = temp2/10;
			count--;
		}
		
		if(sum == num)
			return true;
		else
			return false;
	}
}
