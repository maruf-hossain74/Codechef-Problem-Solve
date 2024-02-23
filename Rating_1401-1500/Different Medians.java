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
		    int x = 1, y = n;
		    for(int i = 1; i <= n; i++) {
		        if(i % 2 == 1) {
		            System.out.print(y + " ");
		            y--;
		        } 
		        else {
		            System.out.print(x + " ");
		            x++;
		        }
		    }
		    System.out.println("");
		}
	}
}
