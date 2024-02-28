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
		    if(n < 3) {
		        System.out.println(-1);
		    }
		    else if(n % 2 == 1) {
		        for(int i = 1; i <= n; i++) {
		            System.out.print(i + " ");
		        }
		        System.out.println("");
		    }
		    else {
		        for(int i = 1 ; i < n - 2; i++) {
		            System.out.print(i + " ");
		        }
		        System.out.println(n + " " + (n - 2) + " " + (n - 1));
		    }
		}

	}
}
