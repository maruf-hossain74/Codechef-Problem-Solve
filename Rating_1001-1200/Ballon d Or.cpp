#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
    int t; cin>> t; while(t--) {
        int n; cin>> n;
        int A[n], cnt = 0;
        for(int i = 0; i < n; i++) {
            cin>> A[i];
            if(A[i] == 2) cnt++;
        }
        if(cnt % 8 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
