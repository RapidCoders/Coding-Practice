/*
	Q.2 Program to print all Disarium numbers between 1 and 100
	Explanation :
	A number is said to be the Disarium number when the sum of its digit raised to the power of their respective positions is equal to the number itself.
	For example, 175 is a Disarium number as follows
	11 + 72 + 53 = 1 + 49 + 125 = 175
	
	Output :
	Disarium numbers between 1 and 100 are
	1 2 3 4 5 6 7 8 9 89 
	
	Author: Suyash
*/

public class Program2  
{  
    public static int calculateLength(int n)
    {  
        int length = 0;  
        while(n != 0)
        {  
            length = length + 1;  
            n = n/10;  
        }  
        return length;  
    }  
      
    public static int sumOfDigits(int num)
    {  
        int sum = 0, rem = 0;  
        int len = calculateLength(num);  
          
        while(num > 0){  
            rem = num%10;  
            sum = sum + (int)Math.pow(rem,len);  
            num = num/10;  
            len--;  
        }  
        return sum;  
    }  
      
    public static void main(String[] args) 
    {  
        int result = 0;  
          
        System.out.println("Disarium numbers between 1 and 100 are");  
        for(int i = 1; i <= 100; i++)
        {  
            result = sumOfDigits(i);  
          
            if(result == i)  
                System.out.print(i + " ");  
        }  
    }  
} 
