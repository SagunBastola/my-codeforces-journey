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
        vec[n - 1] = n;
        unordered_set<int> s;
        s.insert(n);
        for (int i = n - 1; i > 0; i--)
        {
            int a = 1;
            vec[i - 1] = n;
            while (s.find(vec[i - 1]) != s.end())
            {

                if (vec[i] - a * i >= 1 && vec[i] - a * i <= n)
                {
                    vec[i - 1] = vec[i] - a * i;
                }
                else if (vec[i] + a * i >= 1 && vec[i] + a * i <= n)
                {
                    vec[i - 1] = vec[i] + a * i;
                }
                else
                {
                    vec[i - 1] = 1;
                }
                a++;
            }
            s.insert(vec[i - 1]);
        }

        for (int x : vec)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
}
