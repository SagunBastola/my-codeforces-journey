#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> vec(n);
        long long odd = 0;
        long long even = 0;
        long long sum = 0;
        for (long long i = 0; i < n; i++)
        {
            cin >> vec[i];
            sum += vec[i];
            if (vec[i] % 2 == 1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        if (odd == 0)
        {
            cout << 0 << endl;
            continue;
        }
        else if (odd == 1)
        {
            cout << sum << endl;
            continue;
        }
        else if (odd % 2 == 0)
        {
            long long req = odd / 2;
            long long su = 0;
            sort(vec.begin(), vec.end());
            for (long long i = n - 1; i >= 0; i--)
            {
                if (vec[i] % 2 == 1 && req > 0)
                {
                    req--;
                    su += vec[i];
                }
                else if (vec[i] % 2 == 0)
                {
                    su += vec[i];
                }
            }
            cout << su << endl;
        }
        else
        {
            long long req = odd / 2 + 1;
            long long su = 0;
            sort(vec.begin(), vec.end());
            for (long long i = n - 1; i >= 0; i--)
            {
                if (vec[i] % 2 == 1 && req > 0)
                {
                    req--;
                    su += vec[i];
                }
                else if (vec[i] % 2 == 0)
                {
                    su += vec[i];
                }
            }
            cout << su << endl;
        }
    }
}