#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e13;
long long helper(long long int n, unordered_map<long long, long long> &m, long long int k)
{
    if (n == k)
    {
        return 0;
    }
    if (n < k)
    {
        return INF;
    }
    if (m.count(n))
    {
        return m[n];
    }
    if (n % 2 == 0)
    {
        m[n] = helper(n / 2, m, k) + 1;
    }
    else
    {
        m[n] = 1 + min(helper(n / 2, m, k), helper((n + 1) / 2, m, k));
        
    }
    if (m[n] >= INF)
        m[n] = INF;
    return m[n];
}
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        unordered_map<long long, long long> m;
        long long res = helper(n, m, k);
        if (res >= INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << res << endl;
        }
    }
}