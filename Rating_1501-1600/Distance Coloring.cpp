#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int t = 1;
int32_t main() {
	// your code goes here
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    while(t--) {
        int M = 1000000007;
	    int n, k;
	    cin>>n>>k;
	    int count = 1;
    	    for(int i=0;i<n;i++) {
    	        if(k>0) { 
    	           count=(k*count)%M;
    	           k--;
    	       }
    	        else
    	        break;
    	    }
    	 cout<<count<<endl;
    }
    return 0;
}
