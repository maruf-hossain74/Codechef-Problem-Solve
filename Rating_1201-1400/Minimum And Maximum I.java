import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner input = new Scanner(System.in);
        long t = input.nextLong();
        input.nextLine();
        while(t-- > 0) {
            long n = input.nextLong();
            long x = n / 2;
            if(n % 2 == 0) {
                System.out.println(x * (x + 1));
            }
            else {
                System.out.println(x * (x + 1) + (x + 1));
            }
        }
	}
}
