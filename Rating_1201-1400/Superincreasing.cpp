#include <bits/stdc++.h>

using namespace std;

#define int int64_t

int32_t main() {

	// your code goes here

    int t; cin>> t; while(t--) {

        int n, k, x, get = 0;

        cin>> n>> k>> x;

        while(x != 0) {

            get++;

            x /= 2;

        }

        if(get >= k) {

            cout << "Yes" << endl;

        }

        else cout << "No" << endl;

    }

}

