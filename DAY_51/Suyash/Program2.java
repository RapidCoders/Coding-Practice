/*
	Q.2 Write a program to find all possible subsets of a string.
	Input  : "FUN"  
	Output :  F, U, N, FU, UN, FUN
	
	Input  :"ABC"
	Output : A, AB ,ABC, B, BC, C
	
	Author: Suyash
*/
import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a string");
		String str = sobj.next();
		
		SubsetOfString obj = new SubsetOfString();
		obj.ChkSubset(str);
		
		sobj.close();
	}
}

class SubsetOfString 
{
	public void ChkSubset(String str)
	{
		int len = str.length();  
        int temp = 0;  

        String arr[] = new String[len*(len+1)/2];  
          
        for(int i = 0; i < len; i++) 
        {  
            for(int j = i; j < len; j++) 
            {  
                arr[temp] = str.substring(i, j+1);  
                temp++;  
            }  
        }  
        
        System.out.println("All subsets for given string are: ");  
        for(int i = 0; i < arr.length; i++) 
        {  
            System.out.println(arr[i]);  
        }  
    }  
}
