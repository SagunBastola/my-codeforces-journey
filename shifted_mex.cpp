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
        vector<ll> vec;
        unordered_set<ll> s;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (s.find(x) == s.end())
            {
                vec.push_back(x);
            }
            else
            {
                continue;
            }
            s.insert(x);
        }
        sort(vec.begin(), vec.end());
        ll mex = 0;
        ll mex2 = 1; // minimum mex in the array
        for (int i = 0; i < vec.size(); i++)
        {
            while (i > 0 && i < vec.size() && vec[i] == vec[i - 1] + 1)
            {
                mex2++;
                i++;
            }
            mex = max(mex, mex2);
            mex2 = 1;
        }

        cout << mex << endl;
    }
}