import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();
        while(t-- > 0) {
            int n = input.nextInt();
            System.out.println(((n + 1) / 2) + " " + (n + 2) / 3);
        }
	}
}
