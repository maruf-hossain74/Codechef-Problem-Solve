#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        string s; cin>> s;
        int cnt = 0; 
        for(int i = 0; i < 4; i++) cnt += s[i]-'0';
        if(cnt == 1) cout << 11 << endl;
        else if(cnt == 4) cout << 441 << endl;
        else if(cnt == 3) cout << 231 << endl;
        else if(cnt == 2 && s[0] == s[1]) cout << 21 << endl;
        else cout << 121 << endl;
    }
    return 0;
}
