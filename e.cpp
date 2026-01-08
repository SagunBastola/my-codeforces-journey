#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        if (vec[0] == 0)
        {
            vec[0] = 1;
        }
        bool ta = false;
        for (int i = 1; i < n; i++)
        {
            if (vec[i] == 0)
            {
                vec[i] = vec[i - 1] + 1;
            }
            if (vec[i] <= vec[i - 1] && (vec[i] > m || vec[i] < 0))
            {
                ta = true;
                break;
            }
        }
        if (ta)
        {
            cout << 0 << endl;
            break;
        }
        long long int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum +=lcm(vec[i], vec[i + 1]);
        }
        sum += 1.0 / lcm(vec[n - 1], vec[0]);
        cout << sum << endl;
        ;
    }
}