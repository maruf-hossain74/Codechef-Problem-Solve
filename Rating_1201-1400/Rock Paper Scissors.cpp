#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n; cin>> n;
        string s; cin>> s;
        int ans = 0, cnt = 1;
        for(int i = 1; i < n; i++) {
            if(s[i] != s[i-1]) {
                ans += (cnt/2)+(cnt%2);
                cnt = 1;
                if(i == n-1) ans++;
            }
            else {
                cnt++;
                if(i == n-1) {
                    ans += (cnt/2)+(cnt%2);
                }
            }
        }
        cout << ans+(ans==0) << endl;
    }
    return 0;
}
