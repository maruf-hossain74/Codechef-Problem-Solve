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
        bool ans = true;
        while(n > 0) {
            if(s.substr(0, n/2) == s.substr(n/2, n/2)) n /= 2;
            else {
                ans = false;
                break;
            }
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
