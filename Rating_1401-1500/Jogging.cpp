#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define mod 1000000007
int power(int a, int b) {
    if(b == 0) return 1;
    int value = power(a, b/2);
    if(b % 2 == 0) return (value * value) % mod;
    else return (value * value * a) % mod;
}
int32_t main() {
    int t; cin>> t; while(t--) {
        int n, k; cin>> n>> k;
        cout << (k * power(2,n-1)) % mod << endl;
    }
}
