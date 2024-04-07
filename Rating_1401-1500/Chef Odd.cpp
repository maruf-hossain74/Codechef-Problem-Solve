#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main() {
	// your code goes here
	int t; cin>> t; while(t--) {
	    int n, k; cin>> n>> k;
	    if(k*2 > n) cout << "NO" << endl;
	    else {
	        int x = (n/2)+(n%2);
	        x -= k;
	        if(x % 2) cout << "NO" << endl;
	        else cout << "YES" << endl;
	    }
	}
}
