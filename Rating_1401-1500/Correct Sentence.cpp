#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
    int t; cin >> t; while(t--) {
        int n; cin>> n;
        string s[n];
        bool ans = true;
        for(int i = 0; i < n; i++) {
            cin>> s[i];
            int u = 0, l = 0;
            for(int j = 0; j < s[i].size(); j++) {
                if(s[i][j] >= 'a' && s[i][j] <= 'm') l++;
                else if(s[i][j] >= 'N' && s[i][j] <= 'Z') u++;
                if(s[i][j] >= 'A' && s[i][j] <= 'M') ans = false;
                else if(s[i][j] >= 'n' && s[i][j] <= 'z') ans = false;
            }
            if(l && u) ans = false;
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
