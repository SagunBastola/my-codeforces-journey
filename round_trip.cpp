#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll r,x,d,n;
        cin>>r>>x>>d>>n;
        string s;
        cin>>s;
        ll count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '1')
            {
                count++;
                r=r-d;
            }
            if(s[i] == '2')
            {
                if(r<x)
                {
                    count++;
                    r=r-d;
                }
            }
        }
        cout<<count<<endl;

    }
}