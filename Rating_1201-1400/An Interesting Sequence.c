#include <stdio.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--) {
	    int n;
	    scanf("%d", &n);
	    int ans = 0;
	    while(n % 2 == 0) {
	        ans++;
	        n /= 2;
	    }
	    printf("%d\n", ans);
	}
	return 0;
}
