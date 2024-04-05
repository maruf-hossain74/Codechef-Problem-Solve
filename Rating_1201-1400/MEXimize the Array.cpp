#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main() {
	// your code goes here
    int t; cin>> t; while(t--) {
        int n; cin>> n;
        int A[n];
        for(int i = 0; i < n; i++) {
            cin>> A[i];
        }
        sort(A, A+n);
        int ans = 0;
        for(int i = 0; i < n; i++) {
            ans += abs(A[i] - i);
        }
        cout << ans << endl;
    }
}
