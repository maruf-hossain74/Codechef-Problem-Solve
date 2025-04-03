#include <bits/stdc++.h>

using namespace std;

#define int long long

#define endl '\n'

using u128 = __uint128_t;

int binpowI(int a, int b, int mod){

    int res=1;

    a%=mod;

    while(b){

        if(b&1)res= (u128)res*a % mod;

        a = (u128)a*a % mod;

        b>>=1;

    }

    return res;

}

int32_t main() {

    ios::sync_with_stdio(false);

    cin.tie(NULL);

    int t=1,a,b,n;

    cin>>t;

    while(t--){

        int modi = 1000000007;

        cin>>a>>b>>n;

        int  num=a-b;

        if(num==0){

            cout<<(binpowI(a,n,modi)%modi + binpowI(b,n,modi)%modi)%modi<<endl;

            continue;

        }

        int aa=binpowI(a,n,num);

        int bb=binpowI(b,n,num);

        cout<<__gcd((aa+bb)%num, num)%modi<<endl;

    }

    return 0;

}

