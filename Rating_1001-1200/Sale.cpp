#include <bits/stdc++.h>
using namespace std;
#define int int64_t 
int32_t main() {
	// your code goes here
    int t; cin>> t; while(t--) {
        int n; cin>> n;
        int A[n];
        int sum[n];
        for(int i = 0; i < n; i++) {
            cin >> A[i];
            if(i == 0) sum[i] = A[i];
            else sum[i] =sum[i-1] + A[i];
        }
        int ans = 0;
        for(int i = 0; i < n; i++) {
            ans = max({ans, sum[i] + A[i]});
        }
        cout << ans << endl;
    }
}
