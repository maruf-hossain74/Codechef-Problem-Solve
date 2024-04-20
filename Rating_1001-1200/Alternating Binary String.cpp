#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main() {
	// your code goes here
	int t; cin>> t; while(t--) {
	    int n; cin>> n; 
	    int cnt = 0;
	    string s; cin>>  s;
	    for(int i = 1; i < n; i++) if(s[i] == s[i-1]) cnt++;
	    cout << cnt << endl;
	}
}
