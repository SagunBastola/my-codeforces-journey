#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n;
    cin>>n;
    ll sum=n;
    n=n-1;
    ll cnt=2;
    while(n>0)
    {
        sum+=(n*cnt-cnt+1);
        n=n-1;
        cnt++;
    }
    cout<<sum<<endl;
}