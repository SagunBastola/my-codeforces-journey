#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
int main()
{
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> vec(n);
        for(ll& x : vec){ cin>>x ;}
        cout<<min(2*vec[0],vec[0]+vec[1])<<endl;
    }
}