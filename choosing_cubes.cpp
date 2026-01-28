#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f, r;
        cin >> n >> f >> r;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        int fav = vec[f - 1];
        sort(vec.rbegin(), vec.rend());
        int first = -1;
        int last = -1;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] == fav)
            {
                if (first == -1)
                {
                    first = i;
                }
                last = i;
            }
        }
        if (last < r)
        {
            cout << "YES" << endl;
        }
        else if (first >= r)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "MAYBE" << endl;
        }
    }
}