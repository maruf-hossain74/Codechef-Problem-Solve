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
            String s1 = input.nextLine();
            String s2 = input.nextLine();
            Map<Character, Integer> mp1 = new HashMap<>();
            Map<Character, Integer> mp2 = new HashMap<>();
            Set<Character> S = new HashSet<>();
            for(int i = 0; i < s1.length(); i++) {
                mp1.put(s1.charAt(i), mp1.getOrDefault(s1.charAt(i), 0) + 1);
                mp2.put(s2.charAt(i), mp2.getOrDefault(s2.charAt(i), 0) + 1);
                S.add(s1.charAt(i));
                S.add(s2.charAt(i));
            }
            int ans = 0;
            int result = 0;
            for(char it: S) {
                int x = mp1.getOrDefault(it, 0);
                int y = mp2.getOrDefault(it, 0);
                ans = Math.min(x,y);
                result = Math.max(ans, result);
            }
            System.out.println(result);
        }
	}
}
