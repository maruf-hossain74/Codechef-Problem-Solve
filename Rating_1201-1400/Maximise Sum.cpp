#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n; cin>> n;
        int ans = 0, mn = INT_MAX, odd = 0;
        for(int i = 0; i <n; i++) {
            int x; cin>> x;
            if(x < 0) odd++;
            x = abs(x);
            mn = min({mn, x});
            ans += x;
        }
        if(odd%2) cout << ans - mn - mn << endl;
        else cout << ans << endl;
    }
    return 0;
}
