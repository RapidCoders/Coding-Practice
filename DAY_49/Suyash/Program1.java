/*
	Q.1 Write a function that takes a sentence as input and returns the count of unique words in the sentence. Ignore case and punctuation when counting words.
	Input: "The cat in the hat, the hat on the mat."
	Expected Output: 7
	
	Input: "The quick brown Fox jumps over the Lazy Dog."
	Expected Output: 8
	
	Input: ""
	Expected Output: 0
	
	Input: "Coding is fun! Coding is creative, and coding is rewarding."
	Expected Output: 6
	
	Input: "The cat in the hat is the cat on the mat."
	Expected Output: 7
	
	Input: "There are 10 types of people in the world: those who understand binary and those who don't."
	Expected Output: 15
	
	Author: Vaibhav
*/
import java.util.*;

public class Program1 
{

    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.print("Enter a sentence: ");
        String str = sobj.nextLine();
        
        UniqueWords uobj = new UniqueWords();
        int Result = uobj.countUniqueWords(str);
        
        System.out.println("Number of unique words: " + Result);
        
        sobj.close();
    }
}

class UniqueWords
{
    public int countUniqueWords(String str) 
    {
        if (str == null || str.isEmpty()) 
        {
            return 0;
        }

        String cleanedSentence = str.toLowerCase().replaceAll("[^a-zA-Z\\s]", "");

        String words[] = cleanedSentence.split("\\s+");
        System.out.println(words.length);
        
        Set<String> hash_Set = new HashSet<String>(); 
        
        for(int i=0; i<words.length; i++)
        {
        	hash_Set.add(words[i]);
        }
        
        return hash_Set.size();
    }
}
