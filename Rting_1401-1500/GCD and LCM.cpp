#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    int x=max({a,b});
    int y=min({a,b});
    int rem = y;
    while(rem!=0)
    {
        rem=x%y;
        x=y;
        y = rem;
    }
    return x;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int s = gcd(a,b);
	    if(c==1)
	    cout<<s+min({a,b})<<endl;
	    else
	    cout<<s*2<<endl;
	}
	return 0;
}
