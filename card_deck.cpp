#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n+1),p(n+1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            p[a[i]] = i;
        }
        int m;
        m = n + 1;
        for (int i = n; i>0; i--)
        {
            if (p[i] < m)
            {
                for (int j = p[i]; j < m; j++)
                    cout << a[j] << ' ';
                m = p[i];
            }
        }
        cout << endl;
    }
}