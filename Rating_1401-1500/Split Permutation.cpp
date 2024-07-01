#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n; cin>> n;
        if(n % 2) cout << n << " ";
        n -= (n%2);
        int st = 1, en = n;
        while(st < en) {
            cout << st << " " << en << " ";
            st++, en--;
        } cout << endl;
    }
    return 0;
}
