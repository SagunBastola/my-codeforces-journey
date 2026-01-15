#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> vec(n);
        for(ll& x: vec)
        {
            cin>>x;
        }
        sort(vec.begin(),vec.end());
        bool t=false;
        ll r=n-1;
        ll l=2;
        ll r_sum=vec[r--];
        ll b_sum=vec[0]+vec[1];
        if(r_sum>b_sum)
        {
            cout<<"yes"<<endl;
            continue;
        }
        while(l<r)
        {
            r_sum+=vec[r--];
            b_sum+=vec[l++];
            if(r_sum>b_sum)
            {
                t=true;
                break;
            }
        }
        if(t)
        {
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}