#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main() {
	// your code goes here
    int t; cin>> t; while(t--) {
        int n; cin>> n;
        int index = 0;
        while(pow(2,index) <= n) index++;
        int ans = 1;
        for(int i = 1; i < index; i++) ans *= 2;
        cout << n - ans << " " << ans << endl;
    }
}
