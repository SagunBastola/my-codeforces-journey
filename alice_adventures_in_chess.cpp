#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b;
        cin>>n>>a>>b;
        string pattern;
        cin>>pattern;
        ll x,y;
        x=0,y=0;
        bool t=false;
        for(int i=0;i<100;i++)
        {
            for(int i=0;i<n;i++)
            {
                if(pattern[i] == 'N')
                {
                    y=y+1;
                }
                else if(pattern[i] == 'E')
                {
                    x=x+1;
                }
                else if(pattern[i] == 'W')
                {
                    x=x-1;
                }
                else{
                    y=y-1;
                }
                if(a==x && b== y)
                {
                    t=true;
                    break;
                }
            }
            if(a==x && b== y)
                {
                    t=true;
                    break;
                }
        }
        if(t)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;   
        }
    }
}