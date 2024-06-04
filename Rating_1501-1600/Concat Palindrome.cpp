#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n, m; cin>> n>> m;
        string s, k; cin>> s>> k;
        map<char, int> ss, kk;
        for(int i = 0; i < n; i++) ss[s[i]]++;
        for(int i = 0; i < m; i++) kk[k[i]]++;
        int cnt = 0;
        if(n > m) {
            for(auto &it: kk) ss[it.first] -= it.second;
            for(auto &it: ss) {
                if(it.second%2) cnt++;
                if(cnt > 1) break;
                if(it.second < 0) cnt = 2;
            }
            if(cnt > 1) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
            
        else {
            for(auto &it: ss) kk[it.first] -= it.second;
            for(auto &it: kk) {
                if(it.second%2) cnt++;
                if(cnt > 1) break;
                if(it.second < 0) cnt = 2;
            }
            if(cnt > 1) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
        
    }
    return 0;
}
