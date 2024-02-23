#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	   
	   int  t; cin>>t; while(t--) {
	       int n; cin>>n; 
	       int A[n] ;
	       bool flag =true;
	       for(int i = 0 ; i < n; i++) {
	           cin>>A[i] ;
	           if(A[i] <= 4)  flag = false;
	       }
	       if(flag) cout<<"YES"<<endl;
	       else cout<<"NO"<<endl;
	   }

}
