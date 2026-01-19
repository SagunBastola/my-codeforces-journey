#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll m,n,a;
    cin>>m>>n>>a;
    ll perlen=0;
    while(m>0)
    {
        perlen++;
        m=m-a;
    }
    ll result=0;
    while(n>0)
    {
        result+=perlen;
        n=n-a;
    }
    cout<<result<<endl;
}