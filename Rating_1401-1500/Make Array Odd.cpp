#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>> t; while(t--) {
        int n, k; cin>> n>> k; 
        int A[n];
        int even = 0;
        for(int i = 0 ; i < n; i++) {
            cin>> A[i];
            if(A[i] % 2 == 0) even++;
        }
        if(k % 2 == 0 && (even == n)) {
            cout << -1 << endl;
        } 
        else if ( k % 2 == 0) {
            cout << even << endl;
        }
        else {
            cout << (even / 2) + (even % 2) << endl;
        }
    }
}
