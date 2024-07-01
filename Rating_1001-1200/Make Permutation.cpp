#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n; cin>> n;
        int A[n];
        for(int i = 0; i < n; i++) cin>> A[i];
        sort(A, A+n);
        string ans = "YES";
        for(int i = 1; i <= n; i++) {
            if(A[i-1] > i) {
                ans = "NO";
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
