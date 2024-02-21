#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n; cin>>n;
	string s[n];
	map<string , int> mp;
	for(int i = 0 ; i < n; i++) cin>>s[i];
	for(int i = n - 1; i >= 0; i--) {
	    mp[s[i]]++;
	    if(mp[s[i]] == 1) {
	        cout<<s[i][s[i].size() - 2]<<s[i][s[i].size() - 1];
	    }
	}
	cout<<endl;
    return 0;
}
