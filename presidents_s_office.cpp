#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n, m;
    char c;
    cin >> n >> m >> c;
    vector<string> vec(n, string(m, '.'));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
    }
    unordered_set<char> s;
    s.insert(c);
    s.insert('.');
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vec[i][j] == c)
            {
                if (i > 0 && s.find(vec[i - 1][j]) == s.end())
                {
                    cnt++;
                    s.insert(vec[i - 1][j]);
                }
                if (j > 0 && s.find(vec[i][j - 1]) == s.end())
                {
                    cnt++;
                    s.insert(vec[i][j - 1]);
                }
                if (j < m - 1 && s.find(vec[i][j + 1]) == s.end())
                {
                    cnt++;
                    s.insert(vec[i][j + 1]);
                }
                if (i < n - 1 && s.find(vec[i + 1][j]) == s.end())
                {
                    cnt++;
                    s.insert(vec[i + 1][j]);
                }
            }
        }
    }
    cout << cnt << endl;
}