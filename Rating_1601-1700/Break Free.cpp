
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

#define int int64_t
#define endl "\n"
#define mod 1000000007
int t = 1;
int32_t main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin >> t;
    //cin >> t;
    while(t--) {
        int n; cin>> n;
        int A[n], even = 0;

        for(int i = 0; i < n; i++) {
            cin >> A[i];
            if(A[i] % 2 == 0) even++;
        }

        int ans = 1;
        for(int i = 0; i < even; i++) {
            ans *= 2;
            ans %= mod; 
        }
        cout << ans - (n == even) << endl;
    }
	return 0;
}
