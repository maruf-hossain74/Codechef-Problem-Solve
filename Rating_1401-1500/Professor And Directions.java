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
               input.nextLine();
               String s = input.nextLine();
               boolean ans = false;
               for(int i = 1; i < n; i++) {
                   if(s.charAt(i) == s.charAt(i - 1)){
                       ans = true;
                       break;
                   }
               }
               if(ans) {
                   System.out.println("YES");
               }
               else {
                   System.out.println("NO");
               }
        }
	}
}
