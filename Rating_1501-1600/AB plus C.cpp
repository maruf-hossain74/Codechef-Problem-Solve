#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long n;
    cin>>n;
    if(n == 1)
    {
        cout<<-1<<endl;
    }
    else if(n <= 1000000)
    {
        cout<<1<<" "<<(n-1)<<" "<<1<<endl;
    }
    else if( n%1000000 == 0 )
    {
        cout<<(n/1000000)-1<<" "<<1000000<<" "<<1000000<<endl;
    }
    else
    {
        cout<<(n/1000000)<<" "<<1000000<<" "<<n%1000000<<endl;
    }
    
  }
  return 0;
}
