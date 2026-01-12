#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long s;
        long long k,m;
        cin>>s>>k>>m;
        if(m<k)
        {
            cout<<max((1ll)*0,s-m)<<endl;
        }
        else 
        {
            long long sand_left=min(s,k);
            long long time=m%k;
            long long i=0;
            cout<<max(i,sand_left-time)<<endl;
        }
    }
}