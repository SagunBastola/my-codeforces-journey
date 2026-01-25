#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> sets(n);
    vector<vector<int>> pos(m + 1);

    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        while (l--)
        {
            int x;
            cin >> x;
            sets[i].push_back(x);
            pos[x].push_back(i);
        }
    }

    vector<bool> required(n, false);
    for (int i = 1; i <= m; i++)
    {
        if (pos[i].empty())
        {
            cout << "NO" << endl;
            return;
        }
        if (pos[i].size() == 1)
        {
            required[pos[i][0]] = true;
        }
    }

    int optional_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (!required[i])
            optional_count++;
    }

    if (optional_count >= 2)
    {
        cout << "YES" << endl;
        return;
    }


    cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}