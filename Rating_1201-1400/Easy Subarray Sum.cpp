#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n; cin>> n;
        vector<int> v(n);
        for(auto &it: v) cin>> it;
        int st = 0, en = n-1;
        while(v[st] <= 0) st++;
        while(v[en] <= 0) en--;
        int ans = 0;
        for(int i = st; i <= en; i++) if(v[i] < 0) ans++;
        cout << ans << endl;
    }
    return 0;
}
