/*
	Q.1 Write a function that takes a string as input and returns a new string where each character is shifted by a fixed number of positions in the English alphabet. 
	For example, if the shift is 3, 'A' becomes 'D', 'B' becomes 'E', and so on.
	Input: "Hello", shift = 3
	Expected Output: "Khoor"
	
	Input: "World", shift = -2
	Expected Output: "Umpjb"
	
	Input: "Coding", shift = 0
	Expected Output: "Coding"
	
	Input: "Shift", shift = 26
	Expected Output: "Shift"
	
	Input: "AbCdEf", shift = 1
	Expected Output: "BcDeFg"
	
	Input: "", shift = 5
	Expected Output: ""
	
	Author: Vaibhav
*/
import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a string");
		String str = sobj.next();
		System.out.println("Enter number of shifts");
		int shift = sobj.nextInt();
		
		ShiftStringCharacters obj = new ShiftStringCharacters();
		String newStr = obj.ShiftCharacters(str, shift);
		System.out.println(newStr);
		
		sobj.close();
	}
}

class ShiftStringCharacters 
{
	public String ShiftCharacters(String str, int shift)
	{
		if (str == null || str.isEmpty()) 
		{
            return str;
        }

        StringBuilder result = new StringBuilder();

        for (int i = 0; i < str.length(); i++) 
        {
            char currentChar = str.charAt(i);

            if (Character.isLetter(currentChar)) 
            {
                char base = Character.isUpperCase(currentChar) ? 'A' : 'a';

                char shiftedChar = (char) ((currentChar - base + shift) % 26 + base);

                if (shiftedChar < base) 
                {
                    shiftedChar += 26;
                }

                result.append(shiftedChar);
            } 
            else 
            {
                result.append(currentChar);
            }
        }

        return result.toString();
	}
}
