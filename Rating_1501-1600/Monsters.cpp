#include <bits/stdc++.h>
using namespace std;
#define int int64_t

bool is_prime(int n) {
    if(n == 2) return true;
    else if(n % 2 == 0 || n == 1) return false;
    for(int i = 3; i <= sqrtl(n); i+= 2) if(n % i == 0) return false;
    return true;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if(is_prime(n)) cout << 1 << endl;
        else {
            int ans = 0;
            for(int i = 0; i <= 60; i++) {
                if(is_prime(n)) {
                    ans++;
                    break;
                }
                ans++;
                n -= (1 << i);
                if(n <= 0) break;
            }
            if(n < 0) cout << -1 << endl;
            else cout << ans << endl;
        }
    }
    return 0;
}
