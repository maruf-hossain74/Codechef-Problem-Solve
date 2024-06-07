#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n,k; cin >> n >> k;
        int A[n], ans = 0;
        for(int i = 0; i < n; i++) {
            cin>> A[i];
            if(i > 0) ans += abs(A[i] - A[i-1]);
        }
        if(n == 1) cout << 0 << endl;
        else if(n == 2) cout << abs(A[0]-A[1]) << endl;
        else {
            int extra = 0;
            for(int i = 1; i < n-1; i++) {
                int main = abs(A[i]-A[i-1]) + abs(A[i]-A[i+1]);
                extra = max({extra, max({abs(k-A[i-1]) + abs(k-A[i+1]), abs(1-A[i-1]) + abs(1-A[i+1])}) - main});
            }
            extra = max(extra, abs(1 - A[1]) - abs(A[0] - A[1]));
            extra = max(extra, abs(k - A[1]) - abs(A[0] - A[1]));
            extra = max(extra, abs(1 - A[n - 2]) - abs(A[n - 1] - A[n - 2]));
            extra = max(extra, abs(k - A[n - 2]) - abs(A[n - 1] - A[n - 2]));
            cout << ans + extra << endl;
        }
     }
    return 0;
}
