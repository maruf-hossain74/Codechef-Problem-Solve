#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n; cin>> n;
        int x;
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            cin>> x;
            mp[x]++;
        }
        int ans = 0, cal = 1, mod = 1000000007;
        for(int i = 1; i <= n; i++) {
            cal = (cal * mp[i]);
            cal %= mod;
            ans += cal;
            ans %= mod;
        }
        cout << ans << endl;
    }
    return 0;
}
