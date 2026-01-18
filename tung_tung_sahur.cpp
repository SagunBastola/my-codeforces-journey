#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        string t;
        cin >> s;
        cin >> t;
        int i = 0;
        int j = 0;
        int n = s.size();
        int m = t.size();
        bool ta = true;
        while (i < n && j < m)
        {
            if (s[i] == t[j])
            {
                int l, r;
                l = i;
                r = j;
                int s_count = 0;
                int t_count = 0;
                while (l < n && s[l] == s[i])
                {
                    l++;
                    s_count++;
                }
                while (r < m && t[r] == t[j])
                {
                    r++;
                    t_count++;
                }
                if (s_count * 2 >= t_count && s_count <= t_count)
                {
                    i = l;
                    j = r;
                    continue;
                }
                else
                {
                    ta = false;
                    break;
                }
            }
            else
            {
                ta = false;
                break;
            }
        }
        if (ta && i == n && j == m)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}