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
        ll res=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i == 0)
            {
                res++;
            }
            else{
                break;
            }
        }
        cout<<res<<endl;
    }
}