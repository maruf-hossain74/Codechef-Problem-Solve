#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int x;
        int get[1001];
        for(int i = 0; i < 1001; i++) get[i] = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            get[x]++;
        }
        int need = 2, ans = 0;
        for(int i = 1000; need != 0; i--) {
            if(get[i] != 0) {
                ans += i;
                need--;
            }
        }
        printf("%d\n" , ans);
    }
    return 0;
}
