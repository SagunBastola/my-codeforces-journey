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
        vector<vector<int>> vec(n);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            vector<int> vc(a);
            for (int j = 0; j < a; j++)
            {
                cin >> vc[j];
            }
            sort(vc.begin(), vc.end());
            vec[i] = vc;
        }
        sort(vec.begin(), vec.end());
        int sum = vec[0][0];
        for (int i = 1; i < n; i++)
        {
            if (vec[i].size() > 1)
            {
                sum += vec[i][1];
            }
            else
            {
                sum += vec[i][0];
            }
        }
        cout << sum << endl;
    }
}