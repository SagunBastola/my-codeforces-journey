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
        vector<int> vec(n);
        bool so = false;
        int ma = INT_MIN;
        int mi = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            ma = max(vec[i], ma);
            mi = min(vec[i], mi);
            if (i > 0 && vec[i - 1] > vec[i])
            {
                so = true;
            }
        }
        if (!so)
        {
            cout << -1 << endl;
            continue;
        }
        vector<int> temp = vec;
        sort(vec.begin(), vec.end());
        int k = INT_MAX;
        int mod = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] != temp[i])
            {
                mod = max(ma - vec[i], vec[i] - mi);
                k = min(k, mod);
            }
        }
        cout << k << endl;
    }
}