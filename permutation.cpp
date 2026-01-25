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
        for (int &x : vec)
        {
            cin >> x;
        }
        int l = 0;
        int r = n - 1;
        while (l < n && vec[l] == n - l)
        {
            l++;
        }
        int target = n - l;
        for (int j = l; j < n; j++)
        {
            if (vec[j] == target)
            {
                r = j;
                break;
            }
        }
        reverse(vec.begin() + l, vec.begin() + r +1 );
        for (int i = 0; i < n; i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
}