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
        ll max1=INT_MIN;
        vector<ll> vec(n);
        for(ll& x : vec)
        {
            cin>>x;
        }
        sort(vec.begin(),vec.end());
        ll min_bit_val=INT_MAX;
        ll min_bit=INT_MAX;
        for(int i=0;i<n;i++)
        {
            ll a=vec[i];
            ll bit_count=0;
            while(a)
            {
                a=a&(a-1);
                bit_count++;
            }
            if(bit_count<=min_bit)
            {
                min_bit_val=vec[i];
                min_bit=bit_count;
            }
        }
        cout<<min_bit_val<<" ";
        int result=0;
        for(int i=0;i<n;i++)
        {
            result=result+(vec[i]^min_bit_val);
        }
        cout<<result<<endl;
    }
}