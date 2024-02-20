#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d" , &t);
    while(t--) {
        int n , m;
        scanf("%d%d", &n, &m);
        int mn;
        if(n < m) mn = n;
        else mn = m;
        if(n > m + 1) {
            printf("CHEF");
        }
        else if(n + 1 < m) {
            printf("CHEFINA");
        }
        else if(mn % 2) {
            printf("CHEF");
        }
        else {
            printf("CHEFINA");
        }
        printf("\n");
    }
}
