#include <bits/stdc++.h>

using namespace std;

int main() {

	// your code goes here

	string chars = "0ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    map<char, int> mp;

    for(int i = 1; i <= 26; i++) mp[chars[i]] = i;

    int t; cin>> t; while(t--) {

        int n; cin >> n;

        string s, k; cin>> s >> k;

        vector<int>v;

        for(int i = 0; i < n; i++) {

            int x = mp[k[i]] - mp[s[i]];

            if(x < 0) x += 26;

            while(x % 3) x+=26;

            v.push_back(x/3);

        }

        for(auto it: v) cout << it << " ";

        cout << endl;

    }

}

