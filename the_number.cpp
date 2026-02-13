#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (int i = m; i < n; i++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,a,b;
    cin>>n>>a>>b;
    if(a+b < n)
    {
        cout<<b+1;
        return 0;
    }
    cout<<n-a<<endl;
}