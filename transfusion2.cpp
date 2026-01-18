#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> vec(n);
        for (ll &x : vec)
        {
            cin >> x;
        }
        ll odds = 0;
        ll evens = 0;
        ll oddc = 0;
        ll evenc = 0;
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {
                evenc++;
                evens += vec[i];
            }
            else
            {
                oddc++;
                odds += vec[i];
            }
        }
        if (odds % oddc != 0 || evens % evenc != 0 || odds / oddc != evens / evenc)
        {
            cout << "NO";
        }
        else{
            cout<<"YES";
        }
        cout<<endl;
    }
}