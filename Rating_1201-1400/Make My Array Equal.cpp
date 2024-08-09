#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n;
        cin >> n;
        map<int,int>mp;
        for(int i = 0; i < n; i++) {
            int x; cin>> x;
            mp[x]++;
        }
        int cnt = 0, zero = -1;
        for(auto &it: mp) {
            cnt++;
            if(it.first == 0) zero = 0;
        }
        if((cnt == 2 && zero == 0) || cnt == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
