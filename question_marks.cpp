#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        string s;
        cin >> s;
        ll sum = 0;
        set<char> st;
        for (auto c : s)
        {
            if(c == '?')
            {
                continue;
            }
            if (st.find(c) == st.end())
            {
                st.insert(c);
            }
        }
        for (auto c : st)
        {
            sum += min(a, count(s.begin(), s.end(), c));
        }
        cout << sum << endl;
    }
}