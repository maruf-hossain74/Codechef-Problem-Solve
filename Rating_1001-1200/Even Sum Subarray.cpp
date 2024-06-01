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
        bool first = true;
        int f = -1, l = -1, cnt = 0;
        for(int i = 0; i < n; i++) {
            cin>> A[i];
            if(A[i] %2 && first) {
                first = false;
                f = i+1;
                cnt++;
            }
            else if(A[i] % 2) {
                l = i+1;
                cnt++;
            }
        }
        if(f == -1 || cnt%2==0) cout << n << endl;
        else if(l == -1) cout << max({n-f, f-1}) << endl;
        else {
            cout << max({max({n-f,f-1}), max({n-l, l-1})}) << endl;
        }
    }
    return 0;
}
