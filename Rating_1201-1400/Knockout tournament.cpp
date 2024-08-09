#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int n = 16;
        int A[n], B[n];
        for(int i = 0; i < n; i++) {
            cin>> A[i];
            B[i] = A[i];
        }
        sort(A, A+n);
        map<int, int> mp;
        mp[A[0]] = 0;
        mp[A[1]] = 1, mp[A[2]] = 1;
        for(int i = 3; i < 7; i++) mp[A[i]] = 2;
        for(int i = 7; i < 15; i++) mp[A[i]] = 3;
        mp[A[15]] = 4;
        for(int i = 0; i < n; i++) cout << mp[B[i]] << " "; cout << endl;
        
    }
    return 0;
}
