#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t; while(t--)
	{
	    long long  n, m; cin>>n>>m;
	    long long  A[n] , sum = 0;
	    for(long long  i = 0 ; i < n; i++)
	        cin>>A[i];
	   sort(A,A+n);
	   for(long long  i = 0 ; i < n-1; i++)
	   sum += A[n-1] - A[i];
	   long long  need;
	   if(sum%m == 0)
	   need = sum/m;
	   else need = (sum / m)+1;
	   cout<<max({need,A[n-1] - A[0]})<<"\n";
	}
	return 0;
}
