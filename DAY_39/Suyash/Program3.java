/*
	Q.3 write Program for Binary to Octal conversion.
	Input: binary = 1010
	Output:  12
	
	Input: binary = 010101
	Output: 25
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		long num = sobj.nextLong();
		
		BinaryToOctal bobj = new BinaryToOctal();
		long iRet = bobj.decimalToOctal(num);
		System.out.println(iRet);
		
		sobj.close();
	}
}

class BinaryToOctal
{
	int binaryToDecimal(long binary)
    {
        int decimal = 0, i = 0;

        while (binary > 0)
        {
            decimal += Math.pow(2, i++) * (binary % 10);
            binary = binary/10;
        }
 
        return decimal;
    }
 
    int decimalToOctal(long binary)
    {
        int decimal = binaryToDecimal(binary);
 
        String octalString = Integer.toOctalString(decimal);
 
        int octal = Integer.parseInt(octalString);

        return octal;
    }
}
