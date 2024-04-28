#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t; while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    if(n<=k+1) cout<<1<<"\n";
	    else if(n/(k+1) == 1) cout<<2<<"\n";
	    else
	        cout<<n-(2*k)<<"\n";
	}
	return 0;
}
