#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (int i = m; i < n; i++)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int cnt=0;
        for(ll i=n;i<n+1000;i++)
        {
            ll sum=0;
            ll a=i;
            while(a>0)
            {
                sum+=a%10;
                a=a/10;
            }
            if(i == n+sum)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}