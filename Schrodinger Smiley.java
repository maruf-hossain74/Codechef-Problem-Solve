import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();
        while(t-- > 0) {
            int n = input.nextInt();
            input.nextLine();
            String S = input.nextLine();
            boolean flag = false, st = false;
            int ans = 0;
            for(int i = 0; i < n; i++) {
                if(S.charAt(i) == ':' && !st) {
                    flag = true;
                    st = true;
                }
                else if(S.charAt(i) == '(') {
                    flag = false;
                }
                else if(S.charAt(i) == ':' && flag && S.charAt(i-1) != ':') {
                    ans++;
                }
                
                if(S.charAt(i) == ':') {
                    flag = true;
                }
            }
            System.out.println(ans);
        }
    }
}
