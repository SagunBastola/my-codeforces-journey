#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> vec(n);
        for(ll& x : vec)
        {
            cin>>x;
        }
        sort(vec.begin(),vec.end());
        ll mex=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i]==mex)
            {
                mex++;;
            }
        }
        cout<<mex<<endl;
    }
}