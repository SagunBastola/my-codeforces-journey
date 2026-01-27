#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        int mcnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (vec[i] - vec[i - 1] <= k)
            {
                int cnt = 1;
                while (i < n && (vec[i] - vec[i - 1]) <= k)
                {
                    i++;
                    cnt++;
                }
                mcnt = max(cnt, mcnt);
            }
        }
        cout << n - mcnt << endl;
    }
}