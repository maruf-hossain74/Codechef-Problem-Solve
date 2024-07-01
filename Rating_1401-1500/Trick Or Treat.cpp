#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n; cin>> n;
        int m; cin>> m;
        int A[n], x;
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            cin>> A[i];
            A[i] %= m;
        }
        for(int i = 0; i < n; i++) {
            cin>> x;
            x %= m;
            mp[x]++;
        }
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(A[i] == 0) ans += mp[0];
            else ans += mp[m-A[i]];
        }
        cout << ans << endl;
    }
    return 0;
}
