#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n; cin>> n;
        int A[n], ans = 0;
        for(int i = 0; i < n; i++) cin>> A[i];
        sort(A, A+n);
        for(int i = 0; i < n; i++) {
            if(i < n/2) ans -= A[i];
            else ans += A[i];
        }
        cout << ans << endl;
    }
    return 0;
}
