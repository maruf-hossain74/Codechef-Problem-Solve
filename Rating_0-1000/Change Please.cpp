#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>> t; while(t--) {
        int n; cin>> n; 
        cout << (100 - n) - ((100-n) % 10) << endl;
    }
}
