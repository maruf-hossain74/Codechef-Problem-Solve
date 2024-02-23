/*$$$$$$$$ বিসমিল্লাহির রাহমানির রাহিম $$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
 JATIYA KABI KAZI NAZRUL ISLAM UNIVERSITY
$$$$$$$$$ MD. MARUF HOSSAIN $$$$$$$$$$$$$$
$$$$$$$$$ DEPARTMENT OF CSE $$$$$$$$$$$$$$
$$$$$$$$$ SEASION: 2021-2022 $$$$$$$$$$$*/

#include<bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl "\n"

string dtob(int n) {
     string m = "";
    while(n!=0)
      { 
        if(n%2==0)
            m='0'+m; 
        else 
            m='1'+m;
        n/=2; 
      } 
  return m;
}


int t = 1;
int32_t main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
    //cin>>t;
    while(t--) {
        int n; cin>>n;
        string k = dtob(n);
        reverse(k.begin(), k.end());
        int one = 0, cnt = 0, index = -1;
        bool on = false;
        for(int i = 0 ; i< k.size(); i++) {
            if(on && k[i] == '0') {
                index = i;
            }
            if(k[i] == '1') on = true;
        }
        int sum = 0;
        for(int i = index; i < k.size() ; i++)
        {
            sum += pow(2, i);
        }
        if(index == -1) cout<<0<<endl;
        else
            cout<<sum - n<<endl;
    }
	return 0;
}
