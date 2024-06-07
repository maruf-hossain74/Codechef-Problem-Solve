#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n; cin>> n;
        int ans = 0;
        int A[n], B[n];
        for(int i = 0; i < n; i++) cin>> A[i] >> B[i];
        for(int i = 0 ; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                ans = max({ans, A[i]*B[j] + A[j]*B[i]});
            }
        }
        cout << ans << endl;
    }
    return 0;
}
