#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>> t; while(t--) {
        int n, k; cin >> n;
    vector<vector<int> > v(n);

    for(int i = 0; i < n; i++) {
        cin >> k;
        v[i].resize(k);
        for(int j = 0; j < k; j++) {
            cin >> v[i][j];
        }
    }
    int temp = 0;
    for(int i = 0; i < n - 1; i++) {
        
        for(int j = i + 1; j < n; j++) {
            set<int> s;
            for(int k = 0; k < v[i].size(); k++) {
                s.insert(v[i][k]);  
            }
            
            for(int k = 0; k < v[j].size(); k++) {
                s.insert(v[j][k]);
            }
            if(s.size() == 5) {
                temp = 1;
                break;
            }
        }
    }
    cout << (temp == 1 ? "YES" : "NO") << endl;
    }
}
