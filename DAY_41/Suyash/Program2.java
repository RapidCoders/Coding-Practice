/*
	Q.2 Program to Convert Celsius into Fahrenheit.
	Input  : 40
	Output : 104F
	
	Input  : 10
	Output : 50F
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter temp in celsius");
		float celsius = sobj.nextFloat();
		
		CelsiusToFahrenheit cobj = new CelsiusToFahrenheit();
		float fRet = cobj.ConvertToFahrenheit(celsius);
		System.out.println(fRet+"F");
		
		sobj.close();
	}
}

class CelsiusToFahrenheit
{
	public float ConvertToFahrenheit(float celsius)
	{
		float fahrenheit = (celsius * 9/5) + 32;
		
		return fahrenheit;
	}
}
