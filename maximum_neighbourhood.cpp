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
        if(n== 1)
        {
            cout<< n;
        }
        else if(n== 2)
        {
            cout<< 9;
        }
        else if(n== 3)
        {
            cout<< 29;
        }
        else if(n== 4)
        {
            cout<< 56;
        }
        else
        {
            cout<<5*n*n-5*n-5;
        }
        cout<<endl;
    }
}