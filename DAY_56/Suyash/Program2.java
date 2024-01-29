import java.util.Scanner;

public class Program2 
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter a number");
		int n = sobj.nextInt();
		
		PatternPrinting1 pobj = new PatternPrinting1();
		pobj.Printing(n);
		
		sobj.close();
	}
}

class PatternPrinting1
{
	public void Printing(int row)
	{
		int count = 0;
		int count1;
		for (int i = 1; i <= row; i++) 
		{
			count += i;
		}
		for (int i = 0; i < row; i++) 
		{
		    count = count - row + i;
		    count1 = count;
		    for (int j = row; j > i; j--)
		    {
		        count++;
		        if (j != row)
		        {
		        	System.out.print("*"+count);
		        }
		        else
		        {
		        	System.out.print(count);
		        }
		    }
		    System.out.println();
		    count = count1;
		}
	}
}
