#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll w,h,d;
    cin>>w>>h>>d;
    ll n;
    cin>>n;
    ll wa=__gcd(n,w);
    ll ha=__gcd(n/wa,h);
    ll da=__gcd(n/(wa*ha),d);
    if(n/(wa*da*ha) != 1)
    {
        cout<<-1<<endl;
    }
    else{
        cout<<wa-1<<" "<<ha-1<<" "<<da-1<<endl;
    }
}