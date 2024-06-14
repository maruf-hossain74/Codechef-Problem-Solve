#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n, k; cin>> n>> k;
        int need = (k * (k+1))/2;
        need += k-1;
        if(need <= n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
