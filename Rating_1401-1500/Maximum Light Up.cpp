#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main() {
	// your code goes here
    int t; cin>> t; while(t--) {
        int n, a, b, c, x, y;
        cin>> n>> a>> b>> c>> x>> y;
        int xx = (x * a) + b;
        int yy = (y * a) + c;
        int div = min({xx, yy});
        cout << n / div << endl;
    }
}
