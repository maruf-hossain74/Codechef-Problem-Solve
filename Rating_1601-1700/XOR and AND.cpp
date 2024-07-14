#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl "\n"

int t = 1, cs = 0;
int32_t main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin >> t;

    while(t--) {
        int n, x; cin>> n;
        vector<string> s;
        vector<int> v(n);
        for(auto &it: v) cin>> it;
        sort(v.rbegin(), v.rend());
        for(auto &it: v) {
            s.push_back(bitset<32> (it).to_string());
        }
        int ans = 0, cnt = 0, j = 0, i = 0;
        while(s[i][j] == '0') j++;
        for(i = 0; i < n; i++) {
            if(s[i][j] == '0') {
                if(cnt > 1) ans += ((cnt-1)*cnt)/2;
                cnt = 1;
                while(s[i][j] == '0') j++;
                if(j == 32) break;
            }
            else cnt++;
            if(i == n-1) if(cnt > 1) ans += ((cnt-1)*cnt)/2;
        }
        cout << ans << endl;
    }
	return 0;
}
