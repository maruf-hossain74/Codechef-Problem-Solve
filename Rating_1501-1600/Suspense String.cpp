#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    int p1 = 0, p2 = n-1;
	    string s; cin>> s;
	    string ans = "";
	    for(int i = 0; i < n; i++) {
	        if(i%2) {
	            if(s[p2] == '0') ans += s[p2];
	            else ans = s[p2] + ans;
	            p2--;
	        }
	        else {
	            if(s[p1] == '1') ans += s[p1];
	            else ans = s[p1] + ans;
	            p1++;
	        }
	    }
	    cout << ans << endl;
	}

}
