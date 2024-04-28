#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
    ll t; cin>>t; while(t--)
    {
        ll n; cin>>n;
        ll x = sqrtl(n);
        if(n%2) x++;
        cout<<x/2<<endl;
        
    }
}
