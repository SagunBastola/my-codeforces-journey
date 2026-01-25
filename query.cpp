#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        vector<int> b(n);
        for (int &x : a)
        {
            cin >> x;
        }
        for (int &y : b)
        {
            cin >> y;
        }
        vector<vector<int>> query(q, vector<int>(2));
        for (int i = 0; i < q; i++)
        {
            cin >> query[i][0];
            cin >> query[i][1];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (i == n - 1)
            {
                if (a[i] < b[i])
                    a[i] = b[i];
            }
            else
            {
                if (a[i] < b[i] && b[i] > a[i + 1])
                {
                    a[i] = b[i];
                }
                else if (a[i] < a[i + 1])
                {
                    a[i] = a[i + 1];
                }
            }
        }
        vector<int> prefix(n);
        prefix[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i];
        }

        for (int i = 0; i < q; i++)
        {
            int l = query[i][0]; 
            int r = query[i][1]; 

            int sum = 0;
            if (l == 1)
            {
                sum = prefix[r - 1];
            }
            else
            {
                sum = prefix[r - 1] - prefix[l - 2];
            }
            cout << sum << " ";
        }
        cout << endl;
    }
}