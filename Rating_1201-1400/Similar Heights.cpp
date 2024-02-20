#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t; while(t--) {
	    int n; cin>>n;
	    int A[n];
	    map< int , int> mp;
	    int mx = -1 , found;
	    for(int i = 0 ; i < n; i++) {
	        cin>>A[i];
	        mp[A[i]]++;
	        mx = max({mx, A[i]});
	    }
	    bool thr = false;
	    int sing = 0;
	    for(auto it: mp) {
	        if(it.second >= 3) thr = true;
	        if(it.second == 1){
	            sing++;
	            found = it.first;
	        }
	    }
	    if(sing > 1) {
	        cout << (sing + 1) / 2 << endl;
	    }
	    else if(sing == 0) {
	        cout << 0 << endl;
	    }
	    else if(found != mx || (found == mx && thr)) {
	        cout << 1 << endl;
	    }
	    else {
	        cout << 2 << endl;
	    }
	}
    return 0;
}
