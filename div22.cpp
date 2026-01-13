#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {
        ll s;
        ll k, m;
        cin >> s >> k >> m;
        if(k<s)
        {
            if(m%(2*k) < k)
            {
                cout<<s-m%k<<endl;
            }
            else{
                cout<<k-m%k<<endl;
            }
        }
        else{
            cout<<max(0ll,s-m%k)<<endl;
        }
    }
}