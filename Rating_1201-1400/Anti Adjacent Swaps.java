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
		    int A[] = new int[n];
		    for(int i = 0; i < n; i++) {
		        A[i] = input.nextInt();
		    }
		    if(n == 1 || n > 3) {
		        System.out.println("YES");
		    }
		    else if(n == 2 && A[0] <= A[1]) {
		        System.out.println("YES");
		    }
		    else if(n == 3) {
		        int mx = Math.max(A[0] , A[2]);
		        int mn = Math.min(A[0] , A[2]);
		        A[0] = mn; A[2] = mx;
		        
		        if(A[0] <= A[1] && A[1] <= A[2]) {
		            System.out.println("YES");
		        }
		        
		        else {
		            System.out.println("NO");
		        }
		    }
		    else {
		        System.out.println("NO");
		    }
		}

	}
}
