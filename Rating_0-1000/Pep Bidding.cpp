#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t; cin>> t; while(t--) {
	    int n,x; cin>> n;
	    int s1 = 0, s2 = 0, s3 = 0, s4 = 0;
	    for(int i = 0; i < n; i++) cin>> x, s1+=x;
	    for(int i = 0; i < n; i++) cin>> x, s2+=x;
	    for(int i = 0; i < n; i++) cin>> x, s3+=x;
	    for(int i = 0; i < n; i++) cin>> x, s4+=x;
	    if(s1>s3 && s2>s4) cout << "A" << endl;
	    else if(s1<s3 && s2<s4) cout << "P" << endl;
	    else cout << "DRAW" << endl;
	}
}
