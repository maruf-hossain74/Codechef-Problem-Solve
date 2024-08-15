#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
bool prime_check(int n) {
    int ans = true;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) ans = false;
    }
    return !ans;
}
int32_t main() {
    vector<int> non_primes;
    for(int i = 4; i <= 200; i++) {
        if(prime_check(i)) non_primes.push_back(i);
    }
    //for(auto &it: non_primes) cout << it << " "; cout << endl;
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n; cin>> n;
        vector<int> v(n+1);
        map<int,int> mp;
        for(int i = 1; i <= n; i++) {
            cin >> v[i]; 
            mp[v[i]] = i;
        }
        bool ans = false;
        int x, y;
        for(int i = 1; i <= n && !ans; i++) {
            for(auto &it: non_primes) {
                if(mp[it-v[i]] > 0 && i != mp[it-v[i]]) {
                    ans = true;
                    x = i, y = mp[it-v[i]];
                    break;
                }
            }
        }
        if(ans) cout << x << " " << y << endl;
        else cout << -1 << endl;
    }
    return 0;
}
