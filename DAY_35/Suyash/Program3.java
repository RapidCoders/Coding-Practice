/*
	Q.3 Program to Convert Decimal to Hexadecimal.
	Input:  num = 10
	Output: a.
	
	Input:  num = 15
	Output: f.
	
	Input:  num = 289
	Output: 121.
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number that you want to convert to Hexadecimal");
		int num = sobj.nextInt();
		
		DecimalToHexadecimal dobj = new DecimalToHexadecimal();
		String str = dobj.Convert(num);
		System.out.println(str);
		
		sobj.close();
	}
}

class DecimalToHexadecimal
{
	public String Convert(int num)
	{
		String str = "";
		int reminder = 0;
	
		while(num > 0)
	    {
	        reminder = num%16;
	        if(reminder == 10){
	            str = str + "a";
	        }
	        else if(reminder == 11)
	        {
	            str = str + "b";

	        }
	        else if(reminder == 12)
	        {
	            str = str + "c";

	        }
	        else if(reminder == 13)
	        {
	            str = str + "d";

	        }
	        else if(reminder == 14)
	        {
	            str = str + "e";

	        }
	        else if(reminder == 15)
	        {
	            str = str + "f";

	        }
	        else{
	            str = str + reminder;
	        }
	        num = num/16;
	    }
		
		return str;
	}
}
