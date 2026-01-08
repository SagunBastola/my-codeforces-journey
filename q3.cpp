#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int m;
        int k;
        cin >> n >> m >> k;
        if ((k + k) <= n)
        {
            if (2 * k == n)
            {
                n = k + k ;
            }
            else
            {
                n = k + k;
            }
        }
        m = m;
        int sold = 1;
        if (k <= m)
        {
            m=m-k-1;
            sold += k - 1;
        }
        else
        {
            m=0 ;
            sold += m;
        }
        if ((n - k ) <= m)
        {
            sold = sold + (n - k );
        }
        else
        {
            sold = sold + m;
        }
        
        cout << sold << endl;
    }
}