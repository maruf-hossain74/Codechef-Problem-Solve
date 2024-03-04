import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner input = new Scanner(System.in);
		long t = input.nextInt();
		input.nextLine();
		while(t-- > 0) {
		    long n = input.nextLong();
		    long ans = (n * (n + 1) / 2) + (n - 1);
		    System.out.println(ans);
		}
	}
}
