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
        for(ll& x : vec)
        {
            cin>>x;
        }
        sort(vec.begin(),vec.end());
        ll mex1,mex2;
        mex2=0;
        if(vec[0] == 0)
        {
            mex1=1;
        }
        else{
            mex1=0;
        }
        for(int i=1;i<n;i++)
        {
            if(vec[i] == mex2)
            {
                mex2++;
            }
        }
        if(mex1 == mex2)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
}