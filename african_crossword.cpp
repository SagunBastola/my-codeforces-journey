#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> vec(n);
    for (auto &x : vec)
        cin >> x;

    vector<string> a2 = vec;
    for (int i = 0; i < n; i++)
    {
        unordered_map<char, int> s;
        for (int j = 0; j < m; j++)
        {
            char c = vec[i][j];
            if (s.count(c))
            {
                a2[i][j] = '.';
                a2[i][s[c]] = '.';
            }
            s[c] = j;
        }
    }
    for (int j = 0; j < m; j++)
    {
        unordered_map<char, int> s;
        for (int i = 0; i < n; i++)
        {
            char c = vec[i][j];
            if (s.count(c))
            {
                a2[i][j] = '.';
                a2[s[c]][j] = '.';
            }
            s[c] = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a2[i][j] != '.')
                cout << a2[i][j];
        }
    }

    cout << endl;
}
