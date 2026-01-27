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
        int sum = 0;
        bool ta = true;
        for (int i = 0; i < n; i++)
        {
            if (i < n - 1 && vec[i][1] > vec[i + 1][1])
            {
                sum += vec[i][1];
            }
            else if (i == 0 || ta)
            {
                ta=false;
                sum += vec[i][0];
            }
            else
            {
                sum += vec[i][1];
            }
        }
        cout << sum << endl;
    }
}