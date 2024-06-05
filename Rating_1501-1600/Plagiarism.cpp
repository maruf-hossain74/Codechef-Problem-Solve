#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n, m, k, x; cin>> n>> m>> k;
        map<int, int> mp;
        for(int i = 0; i < k; i++) {
            cin>> x;
            mp[x]++;
        }
        set<int> ans;
        int cnt = 0;
        for(int i = 1; i <= n; i++) {
            if(mp[i] > 1) {
                cnt++;
                ans.insert(i);
            }
        }
        cout << cnt << " ";
        for(auto &it: ans) cout << it << " "; cout<< endl;
    }
    return 0;
}
