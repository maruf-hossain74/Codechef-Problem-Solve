#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main() {
	// your code goes here
	int t; cin>> t; while(t--) {
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++) cin>>v[i];
	    int i;
	    for(i=1;i<n;i++){
	        if(v[i]>v[0])   break;
	    }
	    if(i==0 || (n-i)==0){
	        cout<<-1<<endl;
	        continue;
      }
	    cout<<i<<endl;
	    for(int j=0;j<i;j++) cout<<v[j]<<" ";
	    cout<<endl;
	    cout<<(n-i)<<endl;
	    for(i;i<n;i++) cout<<v[i]<<" ";
	    cout<<endl;
	}
}
