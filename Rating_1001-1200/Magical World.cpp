#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int a, b, n; cin>> a>> b>> n;
        if((a <= n && b <= n) || a*b <= n*n) cout << 0 << endl;
        else if(a > n*n && b > n*n) cout << 2 << endl;
        else cout << 1 << endl;
    }
    return 0;
}
