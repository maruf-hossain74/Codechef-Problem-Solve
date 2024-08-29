#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n, k; cin>> n>> k;
        n = (1<<n)-1;
        cout << n * (n-1) << endl;
    }
    return 0;
}
