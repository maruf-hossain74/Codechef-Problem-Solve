#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main() {
	// your code goes here
	int t; cin >> t;
	while(t--) {
	    int n, x;
	    cin >> n >> x;
	    int k = min({x, n/2});
	    int ans = 2*n*k - 2*k*k - k;
	    cout << ans << endl;
	}

}
