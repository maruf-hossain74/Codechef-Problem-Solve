#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main() {
	// your code goes here
    int t; cin>>t; while(t--) {
        int n, k; cin>> n>> k;
        vector<int> A(n), B(k);
        for(int i = 0; i < n; i++) cin>> A[i];
        for(int i = 0; i < k; i++) cin>> B[i];
        if(n < 4 || k < 4 || (n+k) < 11) cout << -1 << endl;
        else {
            sort(A.begin(), A.end());
            sort(B.begin(), B.end());
            int ans = 0;
            int i = n-1;
            //taking best 4 bat
            ans += A[i] +A[i-1] +A[i-2] +A[i-3]; 
            A.pop_back(); A.pop_back(); A.pop_back(); A.pop_back();
            
            i = k-1;
            ans += B[i] +B[i-1] +B[i-2] +B[i-3];
            B.pop_back();B.pop_back();B.pop_back();B.pop_back();
            
            A.insert(A.end(), B.begin(), B.end());
            sort(A.begin(), A.end());
            i = A.size() - 1;
            cout << ans + A[i] + A[i-1] + A[i-2] << endl;
        }
    }
}
