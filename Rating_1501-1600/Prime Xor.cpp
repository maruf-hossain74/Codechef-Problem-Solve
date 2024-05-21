#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int x, y; cin>> x>> y;
        vector<int> v;
        v.push_back(2);
        if(x%2 == y%2 && x%2) {
            v.push_back(2^x);
            v.push_back(2^y);
        }
        else if(x%2) {
            v.push_back(2^x);
            v.push_back(v.back() ^ y);
        }
        else {
            v.push_back(2^y);
            v.push_back(v.back() ^ x);
        }
        sort(v.begin(),v.end());
        cout << v[0] << " " << v[1] << " " << v[2] << endl;
    }
    return 0;
}
