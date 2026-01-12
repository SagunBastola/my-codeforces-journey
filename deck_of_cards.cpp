#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        string a(n, '+');
        long long a1 = 0;
        long long b = 0;
        long long c = 0;
        for (long long i = 0; i < k; i++)
        {
            if (s[i] == '0')
            {
                a1++;
            }
            else if (s[i] == '1')
            {
                b = b + 1;
            }
            else
            {
                c++;
            }
        }
        if (k >= n)
        {
            string aa(n, '-');
            a = aa;
        }
        else
        {
            for (int i = 0; i < n; ++i)
            {
                if (i < a1 + c || i >= n - b - c)
                    a[i] = '?';
                if (i < a1 || i >= n - b || k == n)
                    a[i] = '-';
            }
        }
        cout << a << endl;
    }
}