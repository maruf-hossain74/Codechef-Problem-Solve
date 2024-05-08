#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n; cin>> n;
        int A[n], mx = -1;
        map<int,int> mp;
        for(int i = 0; i < n; i++) {
            cin>> A[i];
            A[i] >>= 1;
            mp[A[i]]++;
            mx = max({mx, mp[A[i]]});
        }
        cout << n - mx << endl;
    }
    return 0;
}
