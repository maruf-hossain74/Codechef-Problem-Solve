#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main() {
	// your code goes here
	int t; cin>>t; while(t--) {
	    int x, y, a, b, l;
	    cin>>x>>y>>a>>b>>l;
	    int x1 = 1, x2 = 1;
	    int kk = x - a;
	    int ll = a - 1;
	    x1 += (kk / l) + (ll / l);
	    kk = y - b;
	    ll = b - 1;
	    x2 += (kk / l) + (ll / l);
	    cout<<x1*x2<<endl;
	}

}
