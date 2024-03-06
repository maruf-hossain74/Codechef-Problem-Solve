#include<bits/stdc++.h>
using namespace std;
 
#define int int64_t
#define endl "\n"

int t = 1;
int32_t main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n, k;
        cin>> n >> k;
        vector<pair<int, int>> vp;

        int A[n], B[n];
        for(int i = 0 ; i < n; i++) cin>> A[i];
        for(int i = 0 ; i < n; i++) cin>> B[i];

        for(int i = 0; i < n; i++) {
            vp.push_back(make_pair(B[i], A[i]));
        }
        sort(vp.begin(), vp.end());
        int ans = 0;
        
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            mp[vp[i].second]++;
            if(mp[vp[i].second] == 1) {
                ans += vp[i].first;
                k--;
                if(k == 0) break;
            }
        }
        if(k) cout << -1 << endl;
        else cout << ans << endl;
    }
	return 0;
}
