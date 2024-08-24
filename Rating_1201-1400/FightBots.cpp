#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n, x, y; cin>> n>> x>> y;
        string s; cin>> s;
        int a = 0, b = 0;
        string ans = "NO";
        for(int i = 0; i < n; i++) {
            if(s[i] == 'R') a++;
            else if(s[i] == 'L') a--;
            else if(s[i] == 'U') b++;
            else b--;
            if(abs(a-x) + abs(b-y) - i == 1) ans = "YES";
        }
        cout << ans << endl;
    }
    return 0;
}
