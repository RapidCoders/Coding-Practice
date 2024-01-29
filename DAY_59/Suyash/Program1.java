/*
	Q.1 Write a function that takes a string and two characters as input and swaps all occurrences of the first character with the second character and vice versa.
	Input: "hello world", 'l', 'o'
	Expected Output: "heool wlrod"
	
	Input: "python", 'a', 'b'
	Expected Output: "python"
	
	Input: "", 'a', 'b'
	Expected Output: ""
	
	Input: "banana", 'a', 'a'
	Expected Output: "banana"
	
	Input: "hello$world!", '$', '!'
	Expected Output: "hello!world$"
	
	Author: Vaibhav
*/
import java.util.Scanner;

public class Program1 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the string: ");
        String input = sobj.nextLine();

        System.out.print("Enter the first character to swap: ");
        char char1 = sobj.next().charAt(0);

        System.out.print("Enter the second character to swap: ");
        char char2 = sobj.next().charAt(0);
        
        Swap1stOccWith2nd obj = new Swap1stOccWith2nd();
        String swappedString = obj.swapCharacters(input, char1, char2);

        System.out.println("Output: " + swappedString);
        
        sobj.close();
	}
}

class Swap1stOccWith2nd
{
	public String swapCharacters(String input, char char1, char char2) 
	{
        char charArray[] = input.toCharArray();

        for (int i = 0; i < charArray.length; i++) 
        {
            if (charArray[i] == char1) 
            {
                charArray[i] = char2;
            } 
            else if (charArray[i] == char2) 
            {
                charArray[i] = char1;
            }
        }

        return new String(charArray);
	}
}
