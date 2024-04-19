#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>> t; while(t--) {
        int n, k; cin>> n>> k;
        int x = 10 * (n%10) + (n/10);
        int y = 10 * (k%10) + (k/10);
        if(n > k || n > y || x > k || x > y) cout << "Yes" << endl;
        else cout << "No" << endl;
            
    }
}
