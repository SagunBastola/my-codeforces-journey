#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n, k, m;
    cin >> n >> k >> m;
    int cnt = 0;
    int temp = n;
    while (temp > 0)
    {
        cnt++;
        temp -= m;
    }
    temp = n;
    while (temp > 0)
    {
        cnt++;
        temp -= m;
    }
    if (cnt <= k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}