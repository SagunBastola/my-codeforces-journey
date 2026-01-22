#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    vector<ll> vec(4);
    ll a,b;
    for(ll& x : vec)
    {
        cin>>x;
    }
    cin>>a>>b;
    ll cnt=0;
    for(int i=a;i<=b;i++)
    {
        int j=i;
        if(i == ((((j%vec[0])%vec[1])%vec[2])%vec[3]))
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}