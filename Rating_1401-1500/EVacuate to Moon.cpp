#include<bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main() {
	// your code goes here
    int t; cin>> t; while(t--) {
        int n, m, h, ans = 0;
        cin>> n>> m>> h;
        vector<int> A(n), B(m);
        for(auto& it: A) cin>> it;
        for(auto& it: B) cin>> it;
        sort(A.rbegin(), A.rend());
        sort(B.rbegin(), B.rend());
        for(int i = 0; i < min({n,m}); i++) {
            ans += min({A[i],h*B[i]});
        }
        cout << ans << endl;
    }
}
