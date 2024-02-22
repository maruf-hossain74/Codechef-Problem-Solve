#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t; while(t--)
	{
	    int n; cin>>n;
	    cout<<n-1<<" "<<n-2<<" ";
	    for(int i = 1; i<=n-3; i++)
	    cout<<i<<" ";
	    cout<<n*(n>=3)<<"\n";
	}
	return 0;
}
