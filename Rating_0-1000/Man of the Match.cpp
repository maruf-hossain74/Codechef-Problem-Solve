#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t; while(t--) {
	   int ans, mx = -1, x,y;
	   for(int i = 1; i <= 22; i++) {
	       cin>>x>>y;
	       int kk = x + (y* 20);
	       if(kk > mx) {
	           mx = kk;
	           ans = i;
	       }
	   }
	   cout<<ans<<endl;
	}

}
