import java.util.Scanner;

public class Program1 
{
    public static void main(String[] args) 
    {
    	Scanner sobj = new Scanner(System.in);
    	
        System.out.println("Enter size");
        int size = sobj.nextInt();
        
        int arr[] = new int[size];
        
        System.out.println("Enter the elements");
        for(int i=0; i<size; i++)
        {
        	arr[i] = sobj.nextInt();
        }
        
        SumOFUniqueNumbers obj = new SumOFUniqueNumbers();
        int result = obj.calculateUniqueSum(arr);
        System.out.println(result);
        
        sobj.close();
    }
}

class SumOFUniqueNumbers
{
	 public int calculateUniqueSum(int arr[]) 
	    {
	        int sum = 0;

	        for (int i = 0; i < arr.length; i++) 
	        {
	            int currentNumber = arr[i];
	            boolean isUnique = true;

	            for (int j = 0; j < i; j++) 
	            {
	                if (currentNumber == arr[j]) 
	                {
	                    isUnique = false;
	                    break;
	                }
	            }

	            if (isUnique) 
	            {
	                sum = sum + currentNumber;
	            }
	        }

	        return sum;
	    }
}
