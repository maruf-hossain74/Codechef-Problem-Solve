#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int a, b; cin>> a>>b;
        int ans = (10*(b-a))/(100-b) + ((10*(b-a))%(100-b) != 0);
        cout << ans << endl;
    }
    return 0;
}
