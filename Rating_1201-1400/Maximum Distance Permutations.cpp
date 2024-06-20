#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n; cin>> n;
        for(int i = 1; i <= n; i++) cout << i << " "; cout << endl;
        int st;
        if(n%2) st = (n/2)+2;
        else st = (n/2) + 1;
        for(int i = st; i <= n; i++) cout << i << " ";;
        for(int i = 1; i < st; i++) cout << i << " "; cout << endl;
    } 
    return 0;
}
