#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<iomanip>

using namespace std;

#define YES     cout<<"YES"<<"\n"
#define Yes     cout<<"Yes"<<"\n"
#define yes     cout<<"yes"<<"\n"
#define NO      cout<<"NO"<<"\n"
#define No      cout<<"No"<<"\n"
#define no      cout<<"no"<<"\n"
#define ssortS  sort(S.begin(),S.end())
#define ssortS1 sort(S1.begin(),S1.end())
#define ssortS2 sort(S2.begin(),S2.end())
#define asortA  sort(A,A+n)
#define asortA1 sort(A1,A1+n)
#define asortA2 sort(A2,A2+n)
#define srevS   reverse(S.begin(),S.end())
#define srevS1  reverse(S1.begin(),S1.end())
#define srevS2  reverse(S2.begin(),S2.end())
#define arevA   reverse(A,A+n)
#define arevA1  reverse(A1,A1+n)
#define arevA2  reverse(A2,A2+n)
#define ll      long long
#define ull     unsigned long long
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

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,flag=0;
        cin>>n;
        char a[n];
        for(int i=0; i<n; i++)
        cin>>a[i];
        for(int i=0; i<n-2; i++)
        {
            if(a[i]=='1' && flag==0)
            {
              cout<<'1';
                flag=1;
            }
            else cout<<'0';
        }
        if(flag==1) cout<<"00";
        else cout<<a[n-2]<<a[n-1];
        cout<<"\n";
    }
    return 0;
}
