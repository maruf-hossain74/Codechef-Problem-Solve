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

            int odd = 1, even = 2, half;
            
            if(n%2 == 1) half = ((n*n) / 2) + 1;
            else half = ((n*n) / 2);
            for(int i = 0 ; i < n ; i++) {
                for(int j = 0; j < n ; j++) {
                    if(half-- > 0){
                        System.out.print(odd + " ");
                        odd += 2;
                    }
                    else {
                        System.out.print(even + " ");
                        even += 2;
                    }
                }
                System.out.println("");
            }
            System.out.println("");
        }
	}
}
