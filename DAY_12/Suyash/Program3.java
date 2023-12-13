/*
	Q.3 Write a program which accept input in binary format and convert it into decimal number.
	Input :n = 11000
	Output : 24
	
	Input :n = 1011
	Output : 11
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter binar number that you want to convert");
		int iNo = sobj.nextInt();
		
		BinaryToDecimal bobj = new BinaryToDecimal();
		int iRes = bobj.Convert(iNo);
		System.out.println("Decimal number is : "+iRes);
		
		sobj.close();
	}
}

class BinaryToDecimal
{
	public int Convert(int iNo)
	{
		int dec = 0;
		int base = 1;
		
		while(iNo > 0)
		{
			int last = iNo%10;
			iNo = iNo/10;
			
			dec = dec+last*base;
			
			base = base*2;
		}
		
		return dec;
	}
}
