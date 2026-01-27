#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,p1,p2,p3,t1,t2;
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    vector<ll> a(n);
    vector<ll> b(n);   
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    ll total=0;
    for(int i=0;i<n;i++)
    {
        total+=(b[i]-a[i])*p1;
        if(i<n-1)
        {
            int  inactive=a[i+1]-b[i];
            if(inactive < t1)
            {
                total+=p1*inactive;
            }
            else 
            {
                total+=t1*p1;
                inactive=inactive-t1;
                if(inactive < t2)
                {
                    total+=p2*inactive;
                }
                else{
                    total+=t2*p2;
                    inactive-=t2;
                    total+=inactive*p3;
                }
            }
        }
    }
    cout<<total<<endl;;
}