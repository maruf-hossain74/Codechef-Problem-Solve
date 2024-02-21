#include<bits/stdc++.h>

using namespace std;
#define ll      long long

int main()
{
    int t; cin>>t; while(t--)
    {
        int n,h;
        ll sum=0;
        cin>>n>>h;
        int A[n];
        for(int i=0; i<n; i++)
        {
              cin>>A[i];
              sum+=A[i];
        }
        if(sum<h) cout<<0<<endl;
        else
        {
            sort(A,A+n);
            ll s=0;
            for(int i=n-1; i>=0; i--)
            {
                s+=A[i];
                if(s>=h)
                {
                    cout<<A[i]<<"\n";
                    break;
                }
            }

        }
    }
    return 0;
}
