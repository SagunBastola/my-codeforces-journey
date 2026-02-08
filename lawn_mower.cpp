#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,w;
        cin>>n>>w;
        int rem=round(n/w);
        cout<<n-rem<<endl;
    }
}