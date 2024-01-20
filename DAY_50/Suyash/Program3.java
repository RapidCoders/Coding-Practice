/*
	Q.3 Write a Program to convert string into upper_lower case character by character.
	Input: Str = "Twinkle twinkle little star, how I wonder what you are!"
	Output:"TwInKlE TwInKlE LiTtLe StAr, hOw i wOnDeR WhAt yOu aRe!"
	
	Author: Shreyash
*/
import java.util.Scanner;

public class Program3 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a string");
		String str = sobj.nextLine();
		
		UpperLowerCharByChar uobj = new UpperLowerCharByChar();
		String newStr = uobj.ConvertUpperLower(str);
		System.out.println(newStr);
		
		sobj.close();
	}
}

class UpperLowerCharByChar 
{
	public String ConvertUpperLower(String str)
	{
		char charArray [] = str.toCharArray();
        boolean toUpper = true;

        for (int i = 0; i < charArray.length; i++) 
        {
            if (Character.isLetter(charArray[i])) 
            {
                if (toUpper) 
                {
                    charArray[i] = Character.toUpperCase(charArray[i]);
                }
                else 
                {
                    charArray[i] = Character.toLowerCase(charArray[i]);
                }
                toUpper = !toUpper;
            }
        }
        return new String(charArray);
	}
}
