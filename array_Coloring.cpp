#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> vec(n);
    for (ll &x : vec)
    {
        cin >> x;
    }
    unordered_set<ll> color1;
    unordered_set<ll> color2;
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
        {
            color1.insert(vec[i]);
        }
        else
        {
            color2.insert(vec[i]);
        }
    }
    sort(vec.begin(), vec.end());
    bool t = false;
    if (color1.find(vec[0]) != color1.end())
    {
        t = false;
    }
    else{
        t=true;
    }
    for (int i = 0; i < n; i++)
    {
        if (t)
        {
            if ((1 & i))
            {
                if (color1.find(vec[i]) == color1.end())
                {
                    cout << "NO";
                    return;
                }
            }
            else
            {
                if (color2.find(vec[i]) == color2.end())
                {
                    cout << "NO";
                    return;
                }
            }
        }
        else
        {
            if (!(1 & i))
            {
                if (color1.find(vec[i]) == color1.end())
                {
                    cout << "NO";
                    return;
                }
            }
            else
            {
                if (color2.find(vec[i]) == color2.end())
                {
                    cout << "NO";
                    return;
                }
            }
        }
    }
    cout << "YES";
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}