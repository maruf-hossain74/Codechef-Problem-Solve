#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n; cin>> n;
        int A[n];
        map<int, int> p;
        for(int i = 0; i < n; i++) {
            cin>> A[i];
            p[A[i]]++;
        }
        int ans = INT_MAX;
        for(auto &it: p) {
            ans = min({ans, (n-it.second)*it.first});
        }
        ans = min({ans , n});
        cout << ans << endl;
    }
    return 0;
}
