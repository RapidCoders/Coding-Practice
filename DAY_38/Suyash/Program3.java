/*
	Q.3 write Program for Octal to Decimal Conversion.
	Input: octal = 462
	Output:  306
	
	Input: octal = 206
	Output: 134
	
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
		
		OctalToDecimal obj = new OctalToDecimal();
		int iRet = obj.DecimalCOnversion(num);
		System.out.println(iRet);
		
		sobj.close();
	}
}

class OctalToDecimal
{
	public int DecimalCOnversion(int num)
	{
		int decimal = 0;
		int n = 0;
		while(true)
		{
			if(num == 0)
			{
				break;
			}
			else
			{
				int temp = num%10;
				decimal += temp*Math.pow(8,n);
				num = num/10;
				n++;
			}
		}
		
		return decimal;
	}
}
