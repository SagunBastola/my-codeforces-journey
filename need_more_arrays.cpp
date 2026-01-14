#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll> vec(n);
        for(ll& x : vec)
        {
            cin>>x;
        }
        vector<ll> vec1;
        vec1.push_back(vec[0]);
        int idx=0;
        for(ll i=1;i<n;i++)
        {
            if(vec[idx]+1 <vec[i])
            {
                vec1.push_back(vec[i]);
                idx=i;
            }
        }
        ll cnt=vec1.size();
        cout<<cnt<<endl;
    }
}