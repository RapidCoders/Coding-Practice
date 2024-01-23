/*
	Q.3 Write a program to check whether given number is Xylem or Phloem Number.
	Explaination:
	a) Extreme digits means first and last digits.
	b) Mean digits means other than extreme digits.
	
	Input: Enter a number: 825122
	Output:
	The sum of extreme digits: 10
	The sum of mean digits: 10
	825122 is a xylem number.
	
	Input: Enter a number: 761312
	Output:
	The sum of extreme digits: 9
	The sum of mean digits: 11
	761312 is a phloem number.
	
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
		
		XylemPhloem xobj = new XylemPhloem();
		xobj.ChkXylemPholem(num);
		
		sobj.close();
	}
}

class XylemPhloem
{
	public void ChkXylemPholem(int num)
	{
		int extreme_sum = 0, mean_sum = 0, n;   
		num = Math.abs(num);  
		n = num;  
		while(n != 0)  
		{  
			if(n == num || n < 10)  
				extreme_sum = extreme_sum + n % 10;  
			else  
				mean_sum = mean_sum + n % 10;  
			n = n / 10;  
		}  
 
		if(extreme_sum  == mean_sum)  
			System.out.println(num + " is a xylem number.");  
		else  
			System.out.println(num + " is a phloem number.");  
	}  
}
