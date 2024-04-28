#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>> t; while(t--) {
        int n; cin>> n; 
        int x;
        int one = 0;
        for(int i = 0; i < n; i++) {
            cin>> x;
            if(x == 1) one++;
        }
        int zero = n - one;
        int ans = min({zero, one});
        zero -= ans;
        one -= ans;
        if(!one) cout << ans << endl;
        else cout << ans + (one / 3) << endl;
    }
}
