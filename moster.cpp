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
        vector<int> a(n);
        vector<int> b(n);
        int min2 = INT_MAX;
        for (int &x : a)
        {
            cin >> x;
            min2 = min(min2, x);
        }
        int min1 = INT_MAX;
        for (int &y : b)
        {
            cin >> y;
            min1 = min(min1, y);
        }
        int score = 0;
        int a1 = -1;
        int level = 0;
        int idx = 0;
        for (int i = 0; i < n; i++, idx++)
        {
            if (a[idx] >= b[i])
            {
                level++;
            }
            else
            {
                a1 = max(a1, a[idx]);
                i--;
            }
        }

        if (a1 == -1)
        {
            long long score1 = (1ll) * level * (1ll) * min2;
            cout << score1 << endl;
            continue;
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            if(a[i] == a1 && i<n-1)
            {
                a1=a[i+1]-1;
            }
        }
        long long score1 = (1ll) * (level) * (1ll) * a1;
        cout << score1 << endl;
    }
}