#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>> t; while(t--) {
	    int n; cin>> n;
	    map<string, int > mp;
	    vector<int> v;
	    for(int i = 0; i < 3*n; i++) {
	        string s;
	        int x;
	        cin >> s >> x;
	        mp[s] += x;
	    }
	    for(auto it: mp) {
	        v.push_back(it.second);
	    }
	    sort(v.begin(), v.end());
	    for(auto it: v) cout << it << " ";
	    cout << endl;
	}

}
