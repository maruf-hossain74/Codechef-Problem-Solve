/*$$$$$$$$ বিসমিল্লাহির রাহমানির রাহিম $$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
 JATIYA KABI KAZI NAZRUL ISLAM UNIVERSITY
$$$$$$$$$ MD. MARUF HOSSAIN $$$$$$$$$$$$$$
$$$$$$$$$ DEPARTMENT OF CSE $$$$$$$$$$$$$$
$$$$$$$$$ SEASION: 2021-2022 $$$$$$$$$$$*/

#include<bits/stdc++.h>
using namespace std;

#define ll      long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A;
        cin>>A;
        char B[8]={'c','o','d','e','c','h','e','f'};
        int c=0,o=0,d=0,e=0,f=0,h=0;
        for(int i=0; i<8; i++)
        {
            if(A[i]=='c') c++;
            else if(A[i]=='o') o++;
            else if(A[i]=='d') d++;
            else if(A[i]=='e') e++;
            else if(A[i]=='f') f++;
            else if(A[i]=='h') h++;
        }
        if(c>6 || o>7 || d>7 || e>6 || f>7 || h>7)
            cout<<-1<<"\n";
        else
        {
            while(1)
            {
                if(A[0]!=B[0] && A[1]!=B[1] && A[2]!=B[2] && A[3]!=B[3] && A[4]!=B[4] && A[5]!=B[5] && A[6]!=B[6] && A[7]!=B[7])
                {
                    for(int i=0; i<8; i++)
                    cout<<A[i];
                    cout<<"\n";
                    break;
                }
                else
                    next_permutation(A.begin(), A.end());
            }

        }
    }
    return 0;
}
