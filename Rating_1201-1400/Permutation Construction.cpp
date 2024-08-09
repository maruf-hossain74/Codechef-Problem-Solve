#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n; cin >> n;
        int x = 1, y = x+(n+1)/2;
        for(int i = 1; i <= n; i++) {
            if(i%2) cout << x++ << " ";
            else cout << y++ << " ";
        } cout << endl;
    }
    return 0;
}
