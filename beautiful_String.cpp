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
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        ll i=1;
        bool t=true;
        vector<ll> vec;
        while(t && i<n)
        {
            if(i>0 && s[i] == '1' && s[i-1] == '0')
            {
                t=false;
            }
            if(s[i] == '0')
            {
                vec.push_back(i+1);
            }
            i++;
        }
        cout<<vec.size()<<endl;
        for(ll& x : vec)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}