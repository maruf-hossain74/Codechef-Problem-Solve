#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main() {
    int t; cin>>t; while(t--) {
        int n; cin>>n;
        string s; cin>>s;
        int cp = 0, np = 0;
        for(int i = 0 ; i < 14; i++) {
            if(s[i] == 'C') cp+=2;
            else if(s[i] == 'N') np+= 2;
            else {
                cp++;
                np++;
            }
        }
        if(cp > np) cout << 60 * n <<endl;
        else if(cp < np) cout<< 40 * n <<endl;
        else cout<< 55 * n <<endl;
        
    }
    return 0;
}
