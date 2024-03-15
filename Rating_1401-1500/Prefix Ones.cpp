#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>> t; while(t--) {
        int n; cin>> n;
        string s; cin>> s;
        int ans = 0, cnt = 0, bonus = 0;
        if(s[0] == '0') {
            for(int i = 0 ; i <n; i++) {
                if(s[i] == '1') cnt++;
                else cnt = 0;
                ans = max({ans, cnt});
            }
        }
        else {
            bool flag = true;
            for(int i = 0 ; i <n; i++) {
                if(s[i] == '0') flag = false;
                if(flag) bonus++;
                else {
                    if(s[i] == '1') cnt++;
                    else cnt = 0;
                    ans = max({ans, cnt});
                }
            }
        }
        cout << ans + bonus << endl;
    }
}
