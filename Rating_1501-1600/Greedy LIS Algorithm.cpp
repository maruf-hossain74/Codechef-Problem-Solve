#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>>t; while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(k==0)
        {
            for(int i =1 ; i <= n; i++)
            cout<<i<<" ";
            cout<<endl;
        }
        else if(n==k || n==k+1)
            cout<<-1<<endl;
        else if(n == k+2)
        {
            cout<<n<<" ";
            for(int i = 1 ; i < n; i++)
            cout<<i<<" ";
            cout<<endl;
        }
        else
        {
            int x;
            x = k + 3;
            cout<<1<<" "<<x<<" ";
            for(int i = 2 ; i <= n; i++)
            {
                if(i != x)
                cout<<i<< " ";
            }
            cout<<endl;
            
        }
        
    }
}
