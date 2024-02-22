#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t; while(t--)
	{
	    int n; cin>>n;
	    int A[n];
	    map<int,int> mp;
	    for(int i = 0 ; i <  n ; i++)
	    {
	        cin>>A[i];
	        mp[A[i]]++;
	    }
	    int cnt = 0;
	    for(auto it: mp)
	        cnt++;
	   if(cnt == 1) cout<<"NO"<<"\n";
	   else
	   {
	           if(n == 4 && A[0] + A[1] == A[2] + A[3])
	                cout<<"NO"<<"\n";
	           else cout<<"YES"<<"\n";
	   }
	}
	return 0;
}
