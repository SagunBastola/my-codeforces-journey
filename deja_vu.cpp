#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, q;
        cin >> n >> q;
        vector<long long> vec(n);
        vector<long long> qu(q);
        for (long long i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        for (long long i = 0; i < q; i++)
        {
            cin >> qu[i];
        }
        for (long long int i = 0; i < n; i++)
        {
            if (vec[i] & 1)
            {
                continue;
            }
            long long int mn = 30;
            for (int i = 0; i < q; i++)
            {
                mn = min(mn, qu[i]);
                long long add = (1LL << (mn - 1));

                for (int j = 0; j < n; j++)
                {
                    if (vec[j] % (1LL << mn) == 0)
                    {
                        vec[j] += add;
                    }
                }
            }
        }
        for (long long i = 0; i < n; i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
}