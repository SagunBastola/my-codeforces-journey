#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m ,s1,s2,d;
        cin>>n>>m>>s1>>s2>>d;
        if(min(s1-1,m-s2)<=d and min(s2-1,n-s1)<=d)
        {
            cout<<-1<<endl;
        }
        else{
            cout<<n+m-2<<endl;
        }
    } 
}