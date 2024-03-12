#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main() {
	// your code goes here
    int t; cin>> t; while(t--) {
        int n, k; cin>> n>> k;
        int A[k], sum = 0;
        for(int i = 0 ; i < k; i++) {
            cin >> A[i];
            sum += A[i];
        }
        int rem = sum - (n * (k - 1)), ans;
        ans = rem * (rem > 0);
        cout << ans << endl;
    }
}
