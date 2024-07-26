#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n, k; cin>> n>> k;
        int A[n], sum = 0, ans = 0;
        for(int i = 0; i < n; i++) cin>> A[i];
        sort(A, A+n);
        for(int i = n-1; i >= 0; i--) {
            if(A[i]+sum >= k) {
                A[i] += sum;
                sum = A[i] - k;
                ans++;
            }
            else break;
        }
        cout << ans <<  endl;
        
    }
    return 0;
}
