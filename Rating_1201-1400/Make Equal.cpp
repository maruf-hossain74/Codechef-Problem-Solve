#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>> t; while(t--) {
        int n; cin>> n;
        int A[n],B[2];
        for(int i = 0; i < n; i++) cin>> A[i];
        
        if(n == 1) cout << "YES" << endl;
        else if(n == 2) {
            if(A[0] == A[1]) cout << "YES" << endl; 
            else cout << "NO" << endl;
        }
        else {
            B[0] = min({A[0], A[n-1]});
            B[1] = max({A[0], A[n-1]});
            sort(A, A+n);
            if(A[0] != B[0] || A[1] != B[1]) cout << "NO" << endl;
            else if(B[0] != B[1]) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
}
