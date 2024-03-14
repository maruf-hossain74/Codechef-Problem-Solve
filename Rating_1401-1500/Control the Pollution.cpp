#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>> t; while(t--) {
        int n, k, x; cin>> n>> k>> x;
        int a1 = k*((n / 100) + (n % 100 > 0));
        int a2 = x*((n / 4) + (n % 4 > 0));
        int a3 = k*(n/100) + x*(((n%100)/4) + ((n%100)%4>0));
        int ans;
        ans = min({a1, a2, a3});
        cout << ans << endl;
    }
}
