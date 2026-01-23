#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, h, l;
        cin >> n >> h >> l;
        vector<int> vec(n);
        for (int &x : vec)
        {
            cin >> x;
        }
        int lessh = 0;
        int lessl = 0;
        int t=0;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] <= h)
            {
                lessh++;
            }
            if (vec[i] <= l)
            {
                lessl++;
            }
            if(vec[i]<=h || vec[i]<=l)
            {
                t++;
            }
        }
        int mi= min(lessh, lessl);
        cout<<min(mi,t/2)<<endl;
    }
}