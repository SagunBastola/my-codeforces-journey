#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.size();
        bool t = true;
        for (int i = 0; i < n ; i++)
        {
            if (i<n-1 && s[i] == '*' && s[i + 1] == '*')
            {
                cout << -1 << endl;
                t = false;
                break;
            }
            else if (i<n-1 && (s[i] == '>') && (s[i + 1] == '*' || s[i + 1] == '<'))
            {
                cout << -1 << endl;

                t = false;
                break;
            }
            else if (i > 0 && (s[i] == '<') && (s[i - 1] == '*' || s[i - 1] == '>'))
            {
                cout << -1 << endl;
                t = false;
                break;
            }
        }
        if (t)
        {
            ll a = count(s.begin(), s.end(), '<');
            ll b = count(s.begin(), s.end(), '>');
            cout << n - min(a, b) << endl;
        }
    }
}