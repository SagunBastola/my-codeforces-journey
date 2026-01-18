#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,l ,r;
        cin>>n>>m>>l>>r;
        if(n==m)
        {
            cout<<l<<" "<<r<<endl;
            continue;
        }
        int need=abs(m-n);
        int l_p=0;
        int r_p=0;
        if(n>m)
        {
            if(abs(l) >= need)
            {
                l_p=l+need;
                need=0;
            }
            else if(abs(l)<need)
            {
                l_p=0;
                need=need-abs(l);
            }
            if(abs(r)>need)
            {
                r_p=r-need;
                need=0;
            }
            else if(abs(r)<need)
            {
                r_p=0;
                need=need-abs(r);
            }
        }
        else if(m>n)
        {
            l_p=l;
            r_p=r+need;
        }
        cout<<l_p<<" "<<r_p<<endl;
    }
}