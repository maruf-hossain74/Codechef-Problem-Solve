#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
    int t; cin >> t; while(t--) {
        int n; cin >> n;
        int x, cnt = 0;
        vector<int> v; 
        for(int i = 1; i <= n; i++) {
            cin >> x;
            if(i == x) v.push_back(x);
        }
        for(int i = 1; i < v.size(); i++) {
            if(v[i] == v[i-1] + 1) cnt++, i++;
        }
        cout << v.size() - cnt << endl;
    }
}
