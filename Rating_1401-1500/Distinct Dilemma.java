import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
		int t = input.nextInt();
		input.nextLine();
		while(t-- > 0) {
			int n = input.nextInt();
			long sum = 0; 
			for(int i = 0; i < n; i++) {
				int x = input.nextInt();
				sum += x;
			}
			double sq = Math.sqrt(sum * 2);
			int ans = 0;
			int st = (int)sq;
			for(int i = st + 1; (i * (i + 1)) / 2 > sum; i--) ans = i - 1;
			System.out.println(ans);
		}
    }
}
