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
            int x = input.nextInt();
            int y = input.nextInt();
            int z = input.nextInt();
            int one = 0, two = 0, three = 0;
            if(x > 2) {
                one++; two++; three++;
            } else if(x == 2) {
                one++; two++;
            } else if(x == 1) {
                one++;
            }
            
            if(y > 2) {
                one++; two++; three++;
            } else if(y == 2) {
                one++; two++;
            } else if(y == 1) {
                one++;
            }
            
            if(z > 2) {
                one++; two++; three++;
            } else if(z == 2) {
                one++; two++;
            } else if(z == 1) {
                one++;
            }
            
            if(three == 3) {
                System.out.println(6);
            } else if( three > 0 && two == 3) {
                System.out.println(5);
            } else if(two >= 2 && one == 3) {
                System.out.println(4);
            } else if(two == 2 || one == 3) {
                System.out.println(3);
            } else if(one == 2) {
                System.out.println(2);
            } else if(one == 1) {
                System.out.println(1);
            } else {
                System.out.println(0);
            }
	    }
    }
}
